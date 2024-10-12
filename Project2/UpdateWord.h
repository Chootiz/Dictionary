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
	/// Summary for UpdateWord
	/// </summary>
	public ref class UpdateWord : public System::Windows::Forms::Form
	{
	public:
		System::String^ wordSent;
		Dictionary* dictionary; 
	private: System::Windows::Forms::TextBox^ textBox3;
	public:

	public:
		Form^ parent;
		UpdateWord(void)
		{
			parent = nullptr;
			dictionary = nullptr;
			wordSent = "";
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UpdateWord(Form^ form, Dictionary* dict, System::String^ wordCame)
		{
			this->parent = form;
			dictionary = dict;
			wordSent = wordCame;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateWord()
		{
			if (components)
			{
				delete components;
			}
		}
		void loader();
		void update();
	private: System::Windows::Forms::Label^ label2;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btn_backFromAdd;
	private: System::Windows::Forms::Button^ btn_update;

	private: System::Windows::Forms::Label^ Enter;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateWord::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_backFromAdd = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->Enter = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightGray;
			this->label2->Location = System::Drawing::Point(431, 355);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 23);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Meaning:";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(431, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 23);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Part of speech:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Location = System::Drawing::Point(435, 248);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(405, 39);
			this->textBox2->TabIndex = 35;
			this->textBox2->Text = L"i.e., n., v., adj.";
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
			this->btn_backFromAdd->Location = System::Drawing::Point(657, 567);
			this->btn_backFromAdd->Name = L"btn_backFromAdd";
			this->btn_backFromAdd->Size = System::Drawing::Size(183, 61);
			this->btn_backFromAdd->TabIndex = 34;
			this->btn_backFromAdd->UseVisualStyleBackColor = false;
			this->btn_backFromAdd->Click += gcnew System::EventHandler(this, &UpdateWord::btn_backFromUpdate_Click);
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
			this->btn_update->Location = System::Drawing::Point(435, 567);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(183, 61);
			this->btn_update->TabIndex = 33;
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &UpdateWord::btn_update_Click);
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Transparent;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->ForeColor = System::Drawing::Color::LightGray;
			this->Enter->Location = System::Drawing::Point(431, 154);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(100, 23);
			this->Enter->TabIndex = 31;
			this->Enter->Text = L"Word:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(435, 180);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(405, 39);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"i.e., Tatakae";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(275, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(681, 133);
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(431, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 23);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Pronunciation:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox4->Location = System::Drawing::Point(435, 316);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(405, 39);
			this->textBox4->TabIndex = 39;
			this->textBox4->Text = L"i.e., ta-ta-ka-ay";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Location = System::Drawing::Point(435, 381);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(405, 162);
			this->textBox3->TabIndex = 37;
			this->textBox3->Text = L"i.e., usually used as a slang for \'fight\'";
			// 
			// UpdateWord
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
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UpdateWord";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"UpdateWord";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UpdateWord::UpdateWord_FormClosing);
			this->Load += gcnew System::EventHandler(this, &UpdateWord::UpdateWord_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateWord_Load(System::Object^ sender, System::EventArgs^ e) {
		loader();
	}
	private: System::Void btn_backFromUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		parent->Show();
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		update();
	}
private: System::Void UpdateWord_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	dictionary->saveData();
}
};
}
