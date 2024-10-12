#pragma once
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Credits
	/// </summary>
	public ref class Credits : public System::Windows::Forms::Form
	{
	public:
		Form^ parent;
		Credits(void)
		{
			InitializeComponent();
			parent = nullptr;
			//
			//TODO: Add the constructor code here
			//
		}
		Credits(Form^ form)
		{
			InitializeComponent();
			this->parent = form;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Credits()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btn_backFromCredits;

	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Credits::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_backFromCredits = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(436, 211);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(375, 229);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(895, 211);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(320, 229);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(50, 196);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(311, 255);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// btn_backFromCredits
			// 
			this->btn_backFromCredits->BackColor = System::Drawing::Color::Transparent;
			this->btn_backFromCredits->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_backFromCredits.BackgroundImage")));
			this->btn_backFromCredits->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_backFromCredits->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_backFromCredits->FlatAppearance->BorderSize = 0;
			this->btn_backFromCredits->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromCredits->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_backFromCredits->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_backFromCredits->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_backFromCredits->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_backFromCredits->Location = System::Drawing::Point(499, 596);
			this->btn_backFromCredits->Name = L"btn_backFromCredits";
			this->btn_backFromCredits->Size = System::Drawing::Size(225, 61);
			this->btn_backFromCredits->TabIndex = 10;
			this->btn_backFromCredits->UseVisualStyleBackColor = false;
			this->btn_backFromCredits->Click += gcnew System::EventHandler(this, &Credits::btn_backFromCredits_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(381, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(471, 97);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// Credits
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_backFromCredits);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Credits";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Credits";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btn_backFromCredits_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		parent->Show();
	}
};
}
