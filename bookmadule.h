#pragma once
#include "BookDetail.h"
#include "signin-signup.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for bookmadule
	/// </summary>
	public ref class bookmadule : public System::Windows::Forms::UserControl
	{
	public:
		bookmadule(void)
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
		~bookmadule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ book_pic;
	protected:
	private: System::Windows::Forms::Label^ book_author;
	private: System::Windows::Forms::Label^ book_title;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ book_price;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(bookmadule::typeid));
			this->book_pic = (gcnew System::Windows::Forms::PictureBox());
			this->book_author = (gcnew System::Windows::Forms::Label());
			this->book_title = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->book_price = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// book_pic
			// 
			this->book_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"book_pic.Image")));
			this->book_pic->Location = System::Drawing::Point(35, 3);
			this->book_pic->Name = L"book_pic";
			this->book_pic->Size = System::Drawing::Size(125, 188);
			this->book_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->book_pic->TabIndex = 0;
			this->book_pic->TabStop = false;
			this->book_pic->Click += gcnew System::EventHandler(this, &bookmadule::book_pic_Click);
			// 
			// book_author
			// 
			this->book_author->AutoSize = true;
			this->book_author->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_author->Location = System::Drawing::Point(76, 226);
			this->book_author->Name = L"book_author";
			this->book_author->Size = System::Drawing::Size(47, 23);
			this->book_author->TabIndex = 1;
			this->book_author->Text = L"نویسنده";
			// 
			// book_title
			// 
			this->book_title->AutoSize = true;
			this->book_title->BackColor = System::Drawing::Color::Transparent;
			this->book_title->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_title->Location = System::Drawing::Point(63, 196);
			this->book_title->Name = L"book_title";
			this->book_title->Size = System::Drawing::Size(69, 27);
			this->book_title->TabIndex = 2;
			this->book_title->Text = L"اسم کتاب";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->book_price);
			this->panel1->Controls->Add(this->book_pic);
			this->panel1->Controls->Add(this->book_title);
			this->panel1->Controls->Add(this->book_author);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(190, 297);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &bookmadule::panel1_Paint);
			// 
			// book_price
			// 
			this->book_price->AutoSize = true;
			this->book_price->BackColor = System::Drawing::Color::Transparent;
			this->book_price->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->book_price->ForeColor = System::Drawing::Color::Green;
			this->book_price->Location = System::Drawing::Point(65, 252);
			this->book_price->Name = L"book_price";
			this->book_price->Size = System::Drawing::Size(71, 38);
			this->book_price->TabIndex = 3;
			this->book_price->Text = L"20,000";
			// 
			// bookmadule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"bookmadule";
			this->Size = System::Drawing::Size(194, 299);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		BookDetail^ tt(Panel^ panel)
		{
			String^ image, ^ title, ^ author, ^ price;
			for each (PictureBox ^ imagebox in panel->Controls->Find("book_pic", true))
			{

				image = imagebox->ImageLocation;

			}
			for each (Label ^ labeltitle in panel->Controls->Find("book_title", true))
			{

				title = labeltitle->Text;

			}
			for each (Label ^ labelauthor in panel->Controls->Find("book_author", true))
			{

				author = labelauthor->Text;

			}
			for each (Label ^ labelprice in panel->Controls->Find("book_price", true))
			{

				price = labelprice->Text;

			}

			BookDetail^ page = gcnew BookDetail();
			for each (PictureBox ^ bookimage in page->Controls->Find("book_image", true))
			{

				bookimage->ImageLocation = image;

			}
			for each (RichTextBox ^ booktitle in page->Controls->Find("book_title", true))
			{

				booktitle->Text = title;

			}
			for each (RichTextBox ^ bookauthor in page->Controls->Find("book_author", true))
			{

				bookauthor->Text = author;

			}

			return page;
		}

#pragma endregion
		BookDetail^ page;
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void book_pic_Click(System::Object^ sender, System::EventArgs^ e) {
	page = tt(panel1);
	signinsignup^ form2 = gcnew signinsignup();
	form2->Height = page->Height+30;
	form2->Width = page->Width+10;
	form2->Controls->Add(page);
	form2->Show();


}
};
}
