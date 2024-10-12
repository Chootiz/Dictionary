#include "AddWord.h"
#include "nArrayTree.h"
#include <vector>
#include <msclr\marshal_cppstd.h>

void Project2::AddWord::addNewWord(System::String^ Spell, System::String^ Pronounciation, System::String^ PartOfSpeech, System::String^ Meaning) {
    msclr::interop::marshal_context context;
    std::string word = context.marshal_as<std::string>(Spell);
    dictionary->normalize(word);
    if (word == "" ||
        Pronounciation == "" ||
        PartOfSpeech == "" ||
        Meaning == "")
        System::Windows::Forms::MessageBox::Show("Please fill all the fields!");
    else {
        std::string pronounciation = context.marshal_as<std::string>(Pronounciation);
        std::string POS = context.marshal_as<std::string>(PartOfSpeech);
        std::string meaning = context.marshal_as<std::string>(Meaning);
        if (dictionary->getWord(word)) {
            System::Windows::Forms::MessageBox::Show(Spell + " already exists in the dictionary!");
        } else {
            dictionary->addWord(word, POS, "Earth", pronounciation);
            Word* added = dictionary->getWord(word);
            std::string str = "";
            for (char ch : meaning) {
                if (ch == '\n') {
                    if (str != "")
                        added->addMeaning(str);
                    str = "";
                }
                else {
                    str += ch;
                }
            }
            if (str != "")
                added->addMeaning(str);
            System::Windows::Forms::MessageBox::Show(Spell + " added successfully!");
        }
    }
}

void Project2::AddWord::suggestWords(System::String^ Word, System::Windows::Forms::ListBox^ list) {
    msclr::interop::marshal_context context;
    std::string str = context.marshal_as<std::string>(Word);
    dictionary->normalize(str);
    auto words = this->dictionary->suggestWords(str);
    list->Items->Clear();
    for (int i = 0; i < words.size(); i++) {
        list->Items->AddRange(gcnew cli::array< System::Object^  >(1) { context.marshal_as<System::String^>(words[i]->spelling) });
    }
}
