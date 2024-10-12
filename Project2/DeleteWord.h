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
	/// Summary for DeleteWord
	/// </summary>
	public ref class DeleteWord : public System::Windows::Forms::Form
	{
	public:
		Form^ parent;
		Dictionary* dictionary;
		DeleteWord(void)
		{
			InitializeComponent();
			parent = nullptr;
			dictionary = nullptr;
			//
			//TODO: Add the constructor code here
			//
		}
		DeleteWord(Form^ form, Dictionary* dict)
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
		~DeleteWord()
		{
			if (components)
			{
				delete components;
			}
		}
		void suggestWords(System::String^ Word, System::Windows::Forms::ListBox^ list);
		void deleteWord(System::String^ Word);
		
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ lst_wordsToDelete;
	protected:


	private: System::Windows::Forms::Label^ Enter;
	private: System::Windows::Forms::TextBox^ tb_wordToDelete;
	private: System::Windows::Forms::Button^ btn_delete;


	private: System::Windows::Forms::Button^ btn_backFromDelete;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteWord::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lst_wordsToDelete = (gcnew System::Windows::Forms::ListBox());
			this->Enter = (gcnew System::Windows::Forms::Label());
			this->tb_wordToDelete = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_backFromDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(292, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(681, 133);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// lst_wordsToDelete
			// 
			this->lst_wordsToDelete->BackColor = System::Drawing::Color::DarkSlateGray;
			this->lst_wordsToDelete->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lst_wordsToDelete->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lst_wordsToDelete->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lst_wordsToDelete->FormattingEnabled = true;
			this->lst_wordsToDelete->ItemHeight = 23;
			this->lst_wordsToDelete->Location = System::Drawing::Point(433, 272);
			this->lst_wordsToDelete->Name = L"lst_wordsToDelete";
			this->lst_wordsToDelete->Size = System::Drawing::Size(405, 209);
			this->lst_wordsToDelete->TabIndex = 15;
			this->lst_wordsToDelete->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteWord::lst_wordsToDelete_SelectedIndexChanged);
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Transparent;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->ForeColor = System::Drawing::Color::LightGray;
			this->Enter->Location = System::Drawing::Point(429, 201);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(100, 23);
			this->Enter->TabIndex = 14;
			this->Enter->Text = L"Enter:";
			// 
			// tb_wordToDelete
			// 
			this->tb_wordToDelete->BackColor = System::Drawing::Color::DarkSlateGray;
			this->tb_wordToDelete->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_wordToDelete->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tb_wordToDelete->Location = System::Drawing::Point(433, 227);
			this->tb_wordToDelete->Name = L"tb_wordToDelete";
			this->tb_wordToDelete->Size = System::Drawing::Size(405, 31);
			this->tb_wordToDelete->TabIndex = 13;
			this->tb_wordToDelete->Text = L"i.e., Tatakae";
			this->tb_wordToDelete->TextChanged += gcnew System::EventHandler(this, &DeleteWord::tb_wordToDelete_TextChanged);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Transparent;
			this->btn_delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete.BackgroundImage")));
			this->btn_delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete->FlatAppearance->BorderSize = 0;
			this->btn_delete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_delete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_delete->Location = System::Drawing::Point(433, 529);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(183, 61);
			this->btn_delete->TabIndex = 18;
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &DeleteWord::btn_delete_Click);
			// 
			// btn_backFromDelete
			// 
			this->btn_backFromDelete->BackColor = System::Drawing::Color::Transparent;
			this->btn_backFromDelete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_backFromDelete.BackgroundImage")));
			this->btn_backFromDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_backFromDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_backFromDelete->FlatAppearance->BorderSize = 0;
			this->btn_backFromDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_backFromDelete->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_backFromDelete->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_backFromDelete->Location = System::Drawing::Point(655, 529);
			this->btn_backFromDelete->Name = L"btn_backFromDelete";
			this->btn_backFromDelete->Size = System::Drawing::Size(183, 61);
			this->btn_backFromDelete->TabIndex = 19;
			this->btn_backFromDelete->UseVisualStyleBackColor = false;
			this->btn_backFromDelete->Click += gcnew System::EventHandler(this, &DeleteWord::btn_backFromDelete_Click);
			// 
			// DeleteWord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->btn_backFromDelete);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lst_wordsToDelete);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->tb_wordToDelete);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DeleteWord";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"DeleteWord";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DeleteWord::DeleteWord_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_backFromDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		parent->Show();
	}
	private: System::Void tb_wordToDelete_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		suggestWords(this->tb_wordToDelete->Text, lst_wordsToDelete);
	}
	private: System::Void lst_wordsToDelete_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (lst_wordsToDelete->SelectedItem) {
			this->tb_wordToDelete->Text = lst_wordsToDelete->SelectedItem->ToString();
			suggestWords(this->tb_wordToDelete->Text, lst_wordsToDelete);
		}
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteWord(this->tb_wordToDelete->Text);
	}
private: System::Void DeleteWord_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	dictionary->saveData();
}
};
}
