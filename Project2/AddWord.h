#pragma once
#include "nArrayTree.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddWord
	/// </summary>
	public ref class AddWord : public System::Windows::Forms::Form
	{
	public:
		Dictionary* dictionary;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	public:
		   Form^ parent;
		AddWord(void)
		{
			InitializeComponent();
			parent = nullptr;
			dictionary = nullptr;
			//
			//TODO: Add the constructor code here
			//
		}
		AddWord(Form^ form, Dictionary* dict)
		{
			InitializeComponent();
			this->parent = form;
			dictionary = dict;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddWord()
		{
			if (components)
			{
				delete components;
			}
		}
		void addNewWord(System::String^ Spell,
			System::String^ Pronounciation,
			System::String^ PartOfSpeech,
			System::String^ Meaning);
		void suggestWords(System::String^ Word, System::Windows::Forms::ListBox^ list);

	private: System::Windows::Forms::Button^ btn_backFromAdd;
	private: System::Windows::Forms::Button^ btn_add;
	protected:

	protected:

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ Enter;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;

	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddWord::typeid));
			this->btn_backFromAdd = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Enter = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_backFromAdd
			// 
			this->btn_backFromAdd->BackColor = System::Drawing::Color::Transparent;
			this->btn_backFromAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_backFromAdd.BackgroundImage")));
			this->btn_backFromAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_backFromAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_backFromAdd->FlatAppearance->BorderSize = 0;
			this->btn_backFromAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_backFromAdd->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_backFromAdd->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_backFromAdd->Location = System::Drawing::Point(652, 492);
			this->btn_backFromAdd->Name = L"btn_backFromAdd";
			this->btn_backFromAdd->Size = System::Drawing::Size(183, 61);
			this->btn_backFromAdd->TabIndex = 24;
			this->btn_backFromAdd->UseVisualStyleBackColor = false;
			this->btn_backFromAdd->Click += gcnew System::EventHandler(this, &AddWord::btn_backFromAdd_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::Transparent;
			this->btn_add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add.BackgroundImage")));
			this->btn_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add->FlatAppearance->BorderSize = 0;
			this->btn_add->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_add->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_add->Location = System::Drawing::Point(437, 492);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(183, 61);
			this->btn_add->TabIndex = 23;
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &AddWord::btn_add_Click);
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
			this->listBox1->Location = System::Drawing::Point(215, 243);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(405, 140);
			this->listBox1->TabIndex = 22;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddWord::listBox1_SelectedIndexChanged);
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Transparent;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->ForeColor = System::Drawing::Color::LightGray;
			this->Enter->Location = System::Drawing::Point(211, 172);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(100, 23);
			this->Enter->TabIndex = 21;
			this->Enter->Text = L"Word:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(215, 198);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(405, 39);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"i.e., Tatakae";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddWord::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(276, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(681, 133);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(648, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 23);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Part of speech:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Location = System::Drawing::Point(652, 198);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(405, 39);
			this->textBox2->TabIndex = 25;
			this->textBox2->Text = L"i.e., n., v., adj.";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightGray;
			this->label2->Location = System::Drawing::Point(648, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 23);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Meaning:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Location = System::Drawing::Point(652, 274);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(405, 181);
			this->textBox3->TabIndex = 27;
			this->textBox3->Text = L"i.e., usually used as a slang for \'fight\'";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(211, 390);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 23);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Pronunciation";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox4->Location = System::Drawing::Point(215, 416);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(405, 39);
			this->textBox4->TabIndex = 29;
			this->textBox4->Text = L"/ta-ta-ka-ay/";
			// 
			// AddWord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btn_backFromAdd);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddWord";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AddWord";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_backFromAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		parent->Show();
	}
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		addNewWord(this->textBox1->Text, this->textBox4->Text, this->textBox2->Text, this->textBox3->Text);
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedItem) {
			this->textBox1->Text = listBox1->SelectedItem->ToString();
			suggestWords(this->textBox1->Text, listBox1);
		}
	}
	private: System::Void AddWord_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		dictionary->saveData();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		suggestWords(this->textBox1->Text, listBox1);
	}
};
}
