#pragma once
#include "SearchWord.h"
#include "nArrayTree.h"
#include <vector>
#include <msclr\marshal_cppstd.h>

void Project2::SearchWord::suggestWords(System::String^ Word, System::Windows::Forms::ListBox^ list) {
    msclr::interop::marshal_context context;
    std::string str = context.marshal_as<std::string>(Word);
    dictionary->normalize(str);
    auto words = this->dictionary->suggestWords(str);
    list->Items->Clear();
    for (int i = 0; i < words.size(); i++) {
        list->Items->AddRange(gcnew cli::array< System::Object^  >(1) { context.marshal_as<System::String^>(words[i]->spelling) });
    }
}

void Project2::SearchWord::searchWord(System::String^ Word, System::Windows::Forms::Button^ word, System::Windows::Forms::Button^ pronounciation, System::Windows::Forms::Button^ partOfSpeech, System::Windows::Forms::Button^ meaning) {
    msclr::interop::marshal_context context;
    std::string str = context.marshal_as<std::string>(Word);
    dictionary->normalize(str);
    auto dicWord = this->dictionary->getWord(str);
    if (dicWord) {
        word->Text = context.marshal_as<System::String^>(dicWord->spelling);
        partOfSpeech->Text = context.marshal_as<System::String^>(dicWord->partOfSpeech);
        pronounciation->Text = context.marshal_as<System::String^>(dicWord->pronunciation);
        meaning->Text = "";
        for (int i = 0; i < dicWord->meanings.size(); i++) {
            meaning->Text += context.marshal_as<System::String^>(dicWord->meanings[i] + "\n");
        }
    } else {
        word->Text = Word;
        pronounciation->Text = "Does Not Exist";
        partOfSpeech->Text = "No data for the word";
        meaning->Text = "The word was not found in the dictionary";
    }
}