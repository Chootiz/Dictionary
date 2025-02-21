#pragma once
#include "nArrayTree.h"
#include "UpdateWord.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchWord
	/// </summary>
	public ref class SearchWord : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;


	public:
		Dictionary* dictionary;
		Form^ parent;
		SearchWord(void)
		{
			parent = nullptr;
			dictionary = nullptr;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SearchWord(Form^ form, Dictionary* dict)
		{
			this->parent = form;
			dictionary = dict;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchWord()
		{
			if (components)
			{
				delete components;
			}
		}
		void suggestWords(System::String^ Word, System::Windows::Forms::ListBox^ list);
		void searchWord(System::String^ Word, System::Windows::Forms::Button^ word, System::Windows::Forms::Button^ pronounciation, System::Windows::Forms::Button^ partOfSpeech, System::Windows::Forms::Button^ meaning);
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ Enter;
	private: System::Windows::Forms::TextBox^ tb_searchWord;
	private: System::Windows::Forms::Button^ btn_search;


	private: System::Windows::Forms::Button^ btn_backFromSearch;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchWord::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Enter = (gcnew System::Windows::Forms::Label());
			this->tb_searchWord = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_backFromSearch = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(273, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(681, 133);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Eren", L"Levi", L"Tatakae\?!" });
			this->listBox1->Location = System::Drawing::Point(47, 209);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(405, 209);
			this->listBox1->TabIndex = 16;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchWord::listBox1_SelectedIndexChanged);
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Transparent;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->ForeColor = System::Drawing::Color::LightGray;
			this->Enter->Location = System::Drawing::Point(43, 138);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(100, 23);
			this->Enter->TabIndex = 15;
			this->Enter->Text = L"Word:";
			// 
			// tb_searchWord
			// 
			this->tb_searchWord->BackColor = System::Drawing::Color::DarkSlateGray;
			this->tb_searchWord->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_searchWord->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tb_searchWord->Location = System::Drawing::Point(47, 164);
			this->tb_searchWord->Name = L"tb_searchWord";
			this->tb_searchWord->Size = System::Drawing::Size(405, 31);
			this->tb_searchWord->TabIndex = 14;
			this->tb_searchWord->Text = L"i.e., Tatakae";
			this->tb_searchWord->TextChanged += gcnew System::EventHandler(this, &SearchWord::tb_searchWord_TextChanged);
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::Transparent;
			this->btn_search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search.BackgroundImage")));
			this->btn_search->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search->FlatAppearance->BorderSize = 0;
			this->btn_search->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_search->Location = System::Drawing::Point(47, 466);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(183, 61);
			this->btn_search->TabIndex = 17;
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &SearchWord::btn_search_Click);
			// 
			// btn_backFromSearch
			// 
			this->btn_backFromSearch->BackColor = System::Drawing::Color::Transparent;
			this->btn_backFromSearch->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_backFromSearch.BackgroundImage")));
			this->btn_backFromSearch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_backFromSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_backFromSearch->FlatAppearance->BorderSize = 0;
			this->btn_backFromSearch->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromSearch->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_backFromSearch->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_backFromSearch->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_backFromSearch->Location = System::Drawing::Point(161, 533);
			this->btn_backFromSearch->Name = L"btn_backFromSearch";
			this->btn_backFromSearch->Size = System::Drawing::Size(183, 61);
			this->btn_backFromSearch->TabIndex = 18;
			this->btn_backFromSearch->UseVisualStyleBackColor = false;
			this->btn_backFromSearch->Click += gcnew System::EventHandler(this, &SearchWord::btn_backFromSearch_Click);
			// 
			// btn_update
			// 
			this->btn_update->BackColor = System::Drawing::Color::Transparent;
			this->btn_update->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update.BackgroundImage")));
			this->btn_update->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update->FlatAppearance->BorderSize = 0;
			this->btn_update->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_update->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_update->Location = System::Drawing::Point(273, 466);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(183, 61);
			this->btn_update->TabIndex = 19;
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &SearchWord::btn_update_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::BurlyWood;
			this->button3->Location = System::Drawing::Point(555, 197);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(564, 70);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Gauche";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Beige;
			this->button4->Location = System::Drawing::Point(564, 262);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(309, 46);
			this->button4->TabIndex = 22;
			this->button4->Text = L"[gohsh]";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(564, 314);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(224, 10);
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Beige;
			this->button5->Location = System::Drawing::Point(564, 330);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(309, 39);
			this->button5->TabIndex = 24;
			this->button5->Text = L"adjective";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Beige;
			this->button6->Location = System::Drawing::Point(564, 365);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(555, 213);
			this->button6->TabIndex = 26;
			this->button6->Text = L"lacking social grace, sensitivity, or acuteness; awkward; tactless.\r\n\r\n";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// SearchWord
			// 
			this->AcceptButton = this->btn_search;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_backFromSearch);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->tb_searchWord);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SearchWord";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SearchWord";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SearchWord::SearchWord_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SearchWord::SearchWord_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_backFromSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show();
		this->Hide();
	}
	private: System::Void tb_searchWord_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		suggestWords(this->tb_searchWord->Text, listBox1);
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedItem) {
			this->tb_searchWord->Text = listBox1->SelectedItem->ToString();
			suggestWords(this->tb_searchWord->Text, listBox1);
			searchWord(this->tb_searchWord->Text, this->button3, this->button4, this->button5, this->button6);
		}
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UpdateWord^ form = gcnew UpdateWord(this, dictionary, this->tb_searchWord->Text);
		form->ShowDialog();
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		searchWord(this->tb_searchWord->Text, this->button3, this->button4, this->button5, this->button6);
	}
	private: System::Void SearchWord_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void SearchWord_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	dictionary->saveData();
}
};
}
