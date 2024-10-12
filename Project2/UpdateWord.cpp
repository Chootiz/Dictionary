#include "UpdateWord.h"
#include "nArrayTree.h"
#include <vector>
#include <msclr\marshal_cppstd.h>

void Project2::UpdateWord::loader() {
    msclr::interop::marshal_context context;
    std::string spell = context.marshal_as<std::string>(wordSent);
    dictionary->normalize(spell);
    Word* word = dictionary->getWord(spell);
    if (word) {
        this->textBox1->Text = context.marshal_as<System::String^>(word->spelling);
        this->textBox2->Text = context.marshal_as<System::String^>(word->partOfSpeech);
        this->textBox4->Text = context.marshal_as<System::String^>(word->pronunciation);
        this->textBox3->Text = "";
        for (std::string str : word->meanings) {
            this->textBox3->AppendText(context.marshal_as<System::String^>(str));
            this->textBox3->AppendText(Environment::NewLine);
        }
    } else {
        System::Windows::Forms::MessageBox::Show(wordSent + " was not found in the dictionary!");
    }
}

void Project2::UpdateWord::update() {
    msclr::interop::marshal_context context;
    std::string spell = context.marshal_as<std::string>(wordSent);
    dictionary->normalize(spell);
    Word* word = dictionary->getWord(spell);
    if (word) {
        std::string meancheck = context.marshal_as<std::string>(this->textBox4->Text->ToString());
        dictionary->normalize(meancheck);
        if (this->textBox1->Text == "" ||
            this->textBox2->Text == "" ||
            this->textBox3->Text == "" ||
            meancheck == "")
            System::Windows::Forms::MessageBox::Show("Please fill in all the fields!");
        else {
            word->spelling = context.marshal_as<std::string>(this->textBox1->Text);
            word->partOfSpeech = context.marshal_as<std::string>(this->textBox2->Text);
            word->pronunciation = context.marshal_as<std::string>(this->textBox4->Text);
            word->meanings.clear();
            std::string str = context.marshal_as<std::string>(this->textBox3->Text->ToString());

            std::string str1 = "";
            for (char ch : str) {
                if (ch == '\n') {
                    if (str1 != "")
                        word->addMeaning(str1);
                    str1 = "";
                }
                else {
                    str1 += ch;
                }
            }
            if (str1 != "")
                word->addMeaning(str1);

            System::Windows::Forms::MessageBox::Show(wordSent + " was updated successfully!");
        }
    }
    else {
        System::Windows::Forms::MessageBox::Show(wordSent + " was not found in the dictionary!");
        this->Hide();
        parent->Show();
    }
}
