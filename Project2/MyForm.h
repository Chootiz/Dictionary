#pragma once
#include "SearchWord.h"
#include "DeleteWord.h"
#include "AddWord.h"
#include "Credits.h"
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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Dictionary* dictionary;
		MyForm(void)
		{
			InitializeComponent();
			dictionary = new Dictionary();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_search_page;
	private: System::Windows::Forms::Button^ btn_addWord_page;
	private: System::Windows::Forms::Button^ btn_deleteWord_page;
	private: System::Windows::Forms::Button^ btn_credits_page;
	protected:





	private: System::Windows::Forms::PictureBox^ pictureBox1;









	protected:

	protected:

	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_search_page = (gcnew System::Windows::Forms::Button());
			this->btn_addWord_page = (gcnew System::Windows::Forms::Button());
			this->btn_deleteWord_page = (gcnew System::Windows::Forms::Button());
			this->btn_credits_page = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_search_page
			// 
			this->btn_search_page->BackColor = System::Drawing::Color::Transparent;
			this->btn_search_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_search_page.BackgroundImage")));
			this->btn_search_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_search_page->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search_page->FlatAppearance->BorderSize = 0;
			this->btn_search_page->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_search_page->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_search_page->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_search_page->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search_page->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_search_page->Location = System::Drawing::Point(491, 282);
			this->btn_search_page->Name = L"btn_search_page";
			this->btn_search_page->Size = System::Drawing::Size(273, 79);
			this->btn_search_page->TabIndex = 1;
			this->btn_search_page->UseVisualStyleBackColor = false;
			this->btn_search_page->Click += gcnew System::EventHandler(this, &MyForm::btn_search_page_Click);
			// 
			// btn_addWord_page
			// 
			this->btn_addWord_page->BackColor = System::Drawing::Color::Transparent;
			this->btn_addWord_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addWord_page.BackgroundImage")));
			this->btn_addWord_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_addWord_page->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addWord_page->FlatAppearance->BorderSize = 0;
			this->btn_addWord_page->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_addWord_page->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_addWord_page->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addWord_page->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_addWord_page->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_addWord_page->Location = System::Drawing::Point(491, 367);
			this->btn_addWord_page->Name = L"btn_addWord_page";
			this->btn_addWord_page->Size = System::Drawing::Size(273, 79);
			this->btn_addWord_page->TabIndex = 2;
			this->btn_addWord_page->UseVisualStyleBackColor = false;
			this->btn_addWord_page->Click += gcnew System::EventHandler(this, &MyForm::btn_addWord_page_Click);
			// 
			// btn_deleteWord_page
			// 
			this->btn_deleteWord_page->BackColor = System::Drawing::Color::Transparent;
			this->btn_deleteWord_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_deleteWord_page.BackgroundImage")));
			this->btn_deleteWord_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_deleteWord_page->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_deleteWord_page->FlatAppearance->BorderSize = 0;
			this->btn_deleteWord_page->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_deleteWord_page->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_deleteWord_page->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_deleteWord_page->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_deleteWord_page->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_deleteWord_page->Location = System::Drawing::Point(491, 452);
			this->btn_deleteWord_page->Name = L"btn_deleteWord_page";
			this->btn_deleteWord_page->Size = System::Drawing::Size(273, 79);
			this->btn_deleteWord_page->TabIndex = 3;
			this->btn_deleteWord_page->UseVisualStyleBackColor = false;
			this->btn_deleteWord_page->Click += gcnew System::EventHandler(this, &MyForm::btn_deleteWord_page_Click);
			// 
			// btn_credits_page
			// 
			this->btn_credits_page->BackColor = System::Drawing::Color::Transparent;
			this->btn_credits_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_credits_page.BackgroundImage")));
			this->btn_credits_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_credits_page->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_credits_page->FlatAppearance->BorderSize = 0;
			this->btn_credits_page->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_credits_page->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_credits_page->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_credits_page->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_credits_page->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_credits_page->Location = System::Drawing::Point(491, 537);
			this->btn_credits_page->Name = L"btn_credits_page";
			this->btn_credits_page->Size = System::Drawing::Size(273, 79);
			this->btn_credits_page->TabIndex = 4;
			this->btn_credits_page->UseVisualStyleBackColor = false;
			this->btn_credits_page->Click += gcnew System::EventHandler(this, &MyForm::btn_credits_page_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(262, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(702, 238);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_credits_page);
			this->Controls->Add(this->btn_deleteWord_page);
			this->Controls->Add(this->btn_addWord_page);
			this->Controls->Add(this->btn_search_page);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dictionary";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dictionary->loadData();
	}
	private: System::Void btn_search_page_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		SearchWord^ form = gcnew SearchWord(this, dictionary);
		form->ShowDialog();
	}
	private: System::Void btn_addWord_page_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AddWord^ form = gcnew AddWord(this, dictionary);
		form->ShowDialog();
	}
	private: System::Void btn_deleteWord_page_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		DeleteWord^ form = gcnew DeleteWord(this, dictionary);
		form->ShowDialog();
	}
	private: System::Void btn_credits_page_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Credits^ form = gcnew Credits(this);
		form->ShowDialog();
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		dictionary->saveData();
	}
};
}
