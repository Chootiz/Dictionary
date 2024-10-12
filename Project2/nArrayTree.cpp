#pragma once
#include "nArrayTree.h"

Dictionary::Dictionary() : root(new Node(nullptr)) {}

void Dictionary::insertWord(Word* word) {
    Node* current = root;
    for (char c : word->spelling) {
        int index = (c > 'z' || c < 'a') ? 26 : c - 'a';
        if (!current->children[index]) {
            current->children[index] = new Node(nullptr);
        }
        current = current->children[index];
    }
    current->data = word;
}

bool Dictionary::searchWord(std::string spelling) {
    Node* current = findLastNode(spelling);
    return (current != nullptr && current->data != nullptr);
}

Word* Dictionary::getWord(std::string spelling) {
    Node* lastNode = findLastNode(spelling);
    return (lastNode != nullptr && lastNode->data != nullptr) ? lastNode->data : nullptr;
}

void Dictionary::deleteWord(std::string spelling) {
    deleteWordHelper(root, std::move(spelling), 0);
}

std::vector<Word*> Dictionary::suggestWords(std::string prefix) {
    std::vector<Word*> suggestions;
    Node* lastNode = findLastNode(prefix);
    if (lastNode) {
        generateSuggestions(lastNode, prefix, suggestions);
    }
    return suggestions;
}

void Dictionary::addWord(string word, string PoS, string origin, string pronounciation) {
    normalize(word);
    this->insertWord(new Word(word, {}, PoS, origin, pronounciation));
}
void Dictionary::saveData() {
    ofstream words("words.txt");
    ofstream meanings("meanings.txt");
    words << this->getWords();
    meanings << this->getMeanings();
}
string Dictionary::getWords() {
    string str = "";
    this->getWordsHelper(this->root, str);
    for (int i = 0; i < str.length(); i++) if (str[i] == ' ') str[i] = '*';
    for (int i = 0; i < str.length(); i++) if (str[i] == ':') str[i] = ' ';
    for (int i = 0; i < str.length(); i++) if (str[i] == '&') str[i] = '\n';
    return str;
}
string Dictionary::getMeanings() {
    string str = "";
    this->getMeaningsHelper(this->root, str);
    for (int i = 0; i < str.length(); i++) if (str[i] == ' ') str[i] = '*';
    for (int i = 0; i < str.length(); i++) if (str[i] == ':') str[i] = ' ';
    for (int i = 0; i < str.length(); i++) if (str[i] == '&') str[i] = '\n';
    return str;
}
void Dictionary::getWordsHelper(Node* current, string& str) {
    if (current == nullptr) return;
    if (current->data) {
        str += current->data->spelling + ":" + current->data->partOfSpeech + ":" + current->data->origin + ":" + current->data->pronunciation + "&";
    }
    for (int i = 0; i < N; ++i) getWordsHelper(current->children[i], str);
}
void Dictionary::getMeaningsHelper(Node* current, string& str) {
    if (current == nullptr) return;
    if (current->data) {
        for (int i = 0; i < current->data->meanings.size(); i++) {
            str += current->data->spelling + ":" + current->data->meanings[i] + "&";
        }
    }
    for (int i = 0; i < N; ++i) getMeaningsHelper(current->children[i], str);
}
void Dictionary::normalize(string& str) {
    if (str == "") return;
    string str2 = str;
    for (int i = 0; i < str.length(); i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') str2[i] += 32;
    }
    str = str2;
    str2 = "";
    bool wordStart = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') wordStart = 1;
        if (wordStart) str2 += str[i];
    }
    str = str2;
    str2 = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            //do nothing
        }
        else {
            str2 += str[i];
        }
    }
    str = str2;
    str2 = "";
    if (str == "") return;
    if (str[str.length() - 1] == ' ') {
        for (int i = 0; i < str.length() - 1; i++) {
            str2 += str[i];
        }
        str = str2;
    }
}

void Dictionary::loadData() {
    ifstream reader;
    string str, str2, str3, str4;
    reader.open("words.txt");
    while (reader >> str >> str2 >> str3 >> str4) {
        for (int i = 0; i < str.length(); i++) if (str[i] == '*') str[i] = ' ';
        for (int i = 0; i < str2.length(); i++) if (str2[i] == '*') str2[i] = ' ';
        for (int i = 0; i < str3.length(); i++) if (str3[i] == '*') str3[i] = ' ';
        for (int i = 0; i < str4.length(); i++) if (str4[i] == '*') str4[i] = ' ';
        normalize(str);
        this->addWord(str, str2, str3, str4);
    }
    reader.close();
    str = "a";
    reader.open("meanings.txt");
    while (reader >> str >> str2) {
        normalize(str);
        for (int i = 0; i < str.length(); i++) if (str[i] == '*') str[i] = ' ';
        for (int i = 0; i < str2.length(); i++) if (str2[i] == '*') str2[i] = ' ';
        Word* word = this->getWord(str);
        if (word) word->addMeaning(str2);
    }
}

// Helper function to delete a word

void Dictionary::deleteWordHelper(Node*& current, std::string spelling, int index) {
    if (!current) {
        return;
    }

    if (index == spelling.length()) {
        // Reached the end of the word, mark as not end of word
        delete current->data;  // Free the memory allocated for Word
        current->data = nullptr;
        return;
    }

    int childIndex = (spelling[index] == ' ') ? 26 : spelling[index] - 'a';
    deleteWordHelper(current->children[childIndex], std::move(spelling), index + 1);

    // Delete the node if it's not a part of another word
    if (!hasChild(current->children[childIndex]->children)) {
        delete current->children[childIndex];
        current->children[childIndex] = nullptr;
    }
}

// Helper function to check if a node has any children

bool Dictionary::hasChild(Node* children[N]) {
    for (int i = 0; i < N; ++i) {
        if (children[i]) {
            return true;
        }
    }
    return false;
}

// Helper function to find the last node of a given prefix

Node* Dictionary::findLastNode(std::string prefix) {
    Node* current = root;
    for (char c : prefix) {
        int index = (c < 'a' || c > 'z') ? 26 : c - 'a';
        if (!current->children[index]) {
            return nullptr;
        }
        current = current->children[index];
    }
    return current;
}

// Helper function to generate suggestions for a given prefix

void Dictionary::generateSuggestions(Node* current, std::string prefix, std::vector<Word*>& suggestions) {
    if (current->data) {
        suggestions.push_back(current->data);
    }

    for (int i = 0; i < N; ++i) {
        if (current->children[i]) {
            char nextChar = (i < 0 || i > 25) ? ' ' : i + 'a';
            generateSuggestions(current->children[i], prefix + nextChar, suggestions);
        }
    }
}
