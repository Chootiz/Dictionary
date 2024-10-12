#pragma once
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include "MyForm.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoadingScreen
	/// </summary>
	public ref class LoadingScreen : public System::Windows::Forms::Form
	{
	public:
		LoadingScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoadingScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoadingScreen::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::SpringGreen;
			this->progressBar1->Location = System::Drawing::Point(360, 328);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(565, 35);
			this->progressBar1->Step = 5;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Beige;
			this->button4->Location = System::Drawing::Point(349, 276);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(309, 46);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Loading...";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &LoadingScreen::timer1_Tick);
			// 
			// LoadingScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->progressBar1);
			this->DoubleBuffered = true;
			this->Name = L"LoadingScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoadingScreen";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LoadingScreen::LoadingScreen_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LoadingScreen::LoadingScreen_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoadingScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (progressBar1->Value == progressBar1->Maximum)
		{
			progressBar1->Maximum = 102;
			progressBar1->Increment(2);
			progressBar1->Maximum = 100;
			Sleep(500);
			timer1->Stop();
			this->Hide();
			MyForm^ form = gcnew MyForm();
			form->ShowDialog();
		}
		progressBar1->Increment(2);
	}
	private: System::Void LoadingScreen_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}
};
}