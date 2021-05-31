#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for BookDetail
	/// </summary>
	public ref class BookDetail : public System::Windows::Forms::UserControl
	{
	public:
		BookDetail(void)
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
		~BookDetail()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ book_image;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ book_title;

	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ book_author;

	private: System::Windows::Forms::RichTextBox^ richTextBox5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookDetail::typeid));
			this->book_image = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->book_title = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->book_author = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_image))->BeginInit();
			this->SuspendLayout();
			// 
			// book_image
			// 
			this->book_image->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"book_image.Image")));
			this->book_image->Location = System::Drawing::Point(683, 23);
			this->book_image->Name = L"book_image";
			this->book_image->Size = System::Drawing::Size(207, 318);
			this->book_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->book_image->TabIndex = 0;
			this->book_image->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(723, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"خرید کتاب";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->richTextBox1->Location = System::Drawing::Point(45, 253);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->richTextBox1->Size = System::Drawing::Size(622, 240);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// book_title
			// 
			this->book_title->BackColor = System::Drawing::Color::White;
			this->book_title->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_title->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_title->Location = System::Drawing::Point(269, 42);
			this->book_title->Name = L"book_title";
			this->book_title->ReadOnly = true;
			this->book_title->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_title->Size = System::Drawing::Size(399, 50);
			this->book_title->TabIndex = 6;
			this->book_title->Text = L"کتاب پیرمرد و دریا ";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::White;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->richTextBox3->ForeColor = System::Drawing::Color::DimGray;
			this->richTextBox3->Location = System::Drawing::Point(269, 161);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->richTextBox3->Size = System::Drawing::Size(399, 40);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->Text = L"ترجمه نازی عظيما";
			// 
			// book_author
			// 
			this->book_author->BackColor = System::Drawing::Color::White;
			this->book_author->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_author->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_author->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->book_author->Location = System::Drawing::Point(283, 98);
			this->book_author->Name = L"book_author";
			this->book_author->ReadOnly = true;
			this->book_author->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_author->Size = System::Drawing::Size(390, 40);
			this->book_author->TabIndex = 8;
			this->book_author->Text = L" ارنست همینگوی";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BackColor = System::Drawing::Color::White;
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->richTextBox5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->richTextBox5->Location = System::Drawing::Point(269, 129);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->richTextBox5->Size = System::Drawing::Size(399, 40);
			this->richTextBox5->TabIndex = 9;
			this->richTextBox5->Text = L"نشر افق";
			// 
			// BookDetail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->book_author);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->book_title);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->book_image);
			this->Name = L"BookDetail";
			this->Size = System::Drawing::Size(921, 568);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_image))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
