#pragma once
#include "ShoppingCart.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace bookstore {

}


namespace bookstore {
	/// <summary>
	/// Summary for BookDetail
	/// </summary>

	ref class BookDetail;

	ref class CartPage
	{
	public: static FlowLayoutPanel^ Cart = gcnew FlowLayoutPanel();

	};

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ book_publisher;

	protected:

	private: System::Windows::Forms::RichTextBox^ book_author;
	private: System::Windows::Forms::RichTextBox^ book_translator;
	private: System::Windows::Forms::RichTextBox^ book_title;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ book_image;
	private: System::Windows::Forms::RichTextBox^ book_price;


	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookDetail::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->book_publisher = (gcnew System::Windows::Forms::RichTextBox());
			this->book_author = (gcnew System::Windows::Forms::RichTextBox());
			this->book_translator = (gcnew System::Windows::Forms::RichTextBox());
			this->book_title = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->book_image = (gcnew System::Windows::Forms::PictureBox());
			this->book_price = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_image))->BeginInit();
			this->SuspendLayout();
			this->panel1->Controls->Add(this->book_price);
			this->panel1->Controls->Add(this->book_publisher);
			this->panel1->Controls->Add(this->book_author);
			this->panel1->Controls->Add(this->book_translator);
			this->panel1->Controls->Add(this->book_title);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->book_image);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(921, 568);
			this->panel1->TabIndex = 10;
			this->book_publisher->BackColor = System::Drawing::Color::White;
			this->book_publisher->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_publisher->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_publisher->ForeColor = System::Drawing::Color::RoyalBlue;
			this->book_publisher->Location = System::Drawing::Point(262, 155);
			this->book_publisher->Multiline = false;
			this->book_publisher->Name = L"book_publisher";
			this->book_publisher->ReadOnly = true;
			this->book_publisher->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_publisher->Size = System::Drawing::Size(399, 40);
			this->book_publisher->TabIndex = 16;
			this->book_publisher->Text = L"نشر افق";
			this->book_author->BackColor = System::Drawing::Color::White;
			this->book_author->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_author->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_author->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->book_author->Location = System::Drawing::Point(276, 124);
			this->book_author->Multiline = false;
			this->book_author->Name = L"book_author";
			this->book_author->ReadOnly = true;
			this->book_author->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_author->Size = System::Drawing::Size(390, 40);
			this->book_author->TabIndex = 15;
			this->book_author->Text = L" ارنست همینگوی";
			this->book_translator->BackColor = System::Drawing::Color::White;
			this->book_translator->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_translator->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_translator->ForeColor = System::Drawing::Color::DimGray;
			this->book_translator->Location = System::Drawing::Point(262, 187);
			this->book_translator->Multiline = false;
			this->book_translator->Name = L"book_translator";
			this->book_translator->ReadOnly = true;
			this->book_translator->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_translator->Size = System::Drawing::Size(399, 40);
			this->book_translator->TabIndex = 14;
			this->book_translator->Text = L"ترجمه نازی عظيما";
			this->book_translator->TextChanged += gcnew System::EventHandler(this, &BookDetail::book_translator_TextChanged);
			this->book_title->BackColor = System::Drawing::Color::White;
			this->book_title->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_title->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_title->Location = System::Drawing::Point(262, 68);
			this->book_title->Multiline = false;
			this->book_title->Name = L"book_title";
			this->book_title->ReadOnly = true;
			this->book_title->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_title->Size = System::Drawing::Size(399, 50);
			this->book_title->TabIndex = 13;
			this->book_title->Text = L"کتاب پیرمرد و دریا ";
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->richTextBox1->Location = System::Drawing::Point(38, 279);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->richTextBox1->Size = System::Drawing::Size(622, 240);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(716, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 42);
			this->button1->TabIndex = 11;
			this->button1->Text = L"خرید کتاب";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BookDetail::button1_Click_1);
			this->book_image->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"book_image.Image")));
			this->book_image->Location = System::Drawing::Point(676, 49);
			this->book_image->Name = L"book_image";
			this->book_image->Size = System::Drawing::Size(207, 318);
			this->book_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->book_image->TabIndex = 10;
			this->book_image->TabStop = false;
			this->book_price->BackColor = System::Drawing::Color::White;
			this->book_price->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->book_price->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_price->ForeColor = System::Drawing::Color::DarkGreen;
			this->book_price->Location = System::Drawing::Point(716, 393);
			this->book_price->Multiline = false;
			this->book_price->Name = L"book_price";
			this->book_price->ReadOnly = true;
			this->book_price->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->book_price->Size = System::Drawing::Size(105, 38);
			this->book_price->TabIndex = 17;
			this->book_price->Text = L"20,000";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Name = L"BookDetail";
			this->Size = System::Drawing::Size(921, 568);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_image))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		ShoppingCart^ get_data(Panel^ panel)
		{
			String^ image, ^ title, ^ author, ^ price;
			for each (PictureBox ^ imagebox in panel->Controls->Find("book_image", true))
			{

				image = imagebox->ImageLocation;

			}
			for each (RichTextBox ^ labeltitle in panel->Controls->Find("book_title", true))
			{

				title = labeltitle->Text;

			}
			for each (RichTextBox ^ labelauthor in panel->Controls->Find("book_author", true))
			{

				author = labelauthor->Text;

			}
			//for each (Label ^ labelprice in panel->Controls->Find("book_price", true))
			//{

			//	price = labelprice->Text;

			//}

			ShoppingCart^ page = gcnew ShoppingCart();
			for each (PictureBox ^ bookimage in page->Controls->Find("Cover", true))
			{

				bookimage->ImageLocation = image;

			}
			for each (RichTextBox ^ booktitle in page->Controls->Find("Title", true))
			{

				booktitle->Text = title;

			}
			for each (RichTextBox ^ bookauthor in page->Controls->Find("Author", true))
			{

				bookauthor->Text = author;

			}

			return page;
		}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ShoppingCart^ Item = gcnew ShoppingCart();
		Item = get_data(this->panel1);
		CartPage::Cart->Controls->Add(Item);
}
private: System::Void book_translator_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}
