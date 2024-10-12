#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

const int N = 27; // 26 alphabets + 1 for space or special characters

class Word {
public:
	std::string spelling;
	std::vector<std::string> meanings;
	std::string partOfSpeech;
	std::string origin;
	std::string pronunciation;

	Word(std::string _spelling, std::vector<std::string> _meanings,
		std::string _partOfSpeech, std::string _origin, std::string _pronunciation)
		: spelling(std::move(_spelling)), meanings(std::move(_meanings)),
		partOfSpeech(std::move(_partOfSpeech)), origin(std::move(_origin)), pronunciation(std::move(_pronunciation)) {}
	void addMeaning(string meaning) {
		this->meanings.push_back(meaning);
	}
	bool operator <(Word w2) {
		return this->spelling < w2.spelling;
	}
	bool operator >(Word w2) {
		return this->spelling > w2.spelling;
	}
	bool operator ==(Word w2) {
		return this->spelling == w2.spelling;
	}
};

struct Node {
	Word* data;
	Node* children[N];

	Node(Word* word) : data(word) {
		for (int i = 0; i < N; ++i) {
			children[i] = nullptr;
		}
	}
};

class Dictionary {
private:
	Node* root;
public:
	Dictionary();

	void insertWord(Word* word);

	bool searchWord(std::string spelling);

	Word* getWord(std::string spelling);

	void deleteWord(std::string spelling);

	std::vector<Word*> suggestWords(std::string prefix);
	void addWord(string word, string PoS, string origin, string pronounciation);

	void normalize(string& str);
	void saveData();
	string getWords();
	string getMeanings();

	void loadData();
private:
	// Helper function to delete a word
	void deleteWordHelper(Node*& current, std::string spelling, int index);
	
	//Helper function to get data of all words, used to save the data to a file
	void getWordsHelper(Node* current, string& str);

	//Helper function to get meanings of all words, used to save data to a file
	void getMeaningsHelper(Node* current, string& str);

	// Helper function to check if a node has any children
	bool hasChild(Node* children[N]);

	// Helper function to find the last node of a given prefix
	Node* findLastNode(std::string prefix);

	// Helper function to generate suggestions for a given prefix
	void generateSuggestions(Node* current, std::string prefix, std::vector<Word*>& suggestions);


};