#pragma once
#include "DeleteWord.h"
#include "nArrayTree.h"
#include <vector>
#include <msclr\marshal_cppstd.h>

void Project2::DeleteWord::suggestWords(System::String^ Word, System::Windows::Forms::ListBox^ list) {
    msclr::interop::marshal_context context;
    std::string str = context.marshal_as<std::string>(Word);
    dictionary->normalize(str);
    auto words = this->dictionary->suggestWords(str);
    list->Items->Clear();
    for (int i = 0; i < words.size(); i++) {
        list->Items->AddRange(gcnew cli::array< System::Object^  >(1) { context.marshal_as<System::String^>(words[i]->spelling) });
    }
}

void Project2::DeleteWord::deleteWord(System::String^ Word) {
    msclr::interop::marshal_context context;
    std::string str = context.marshal_as<std::string>(Word);
    dictionary->normalize(str);
    if (dictionary->getWord(str)) {
        dictionary->deleteWord(str);
        System::Windows::Forms::MessageBox::Show(Word + " deleted successfully!");
    } else {
        System::Windows::Forms::MessageBox::Show(Word + " was not found in the dictionary!");
    }
}
