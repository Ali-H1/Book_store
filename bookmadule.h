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
	public: delegate void delPassData(BookDetail^ Item);
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
	private: System::Windows::Forms::Panel^ additional_detail_panel;

	private: System::Windows::Forms::Label^ publisher_label;
	private: System::Windows::Forms::Label^ genre_label;
	private: System::Windows::Forms::Label^ summery_label;
	private: System::Windows::Forms::Label^ translator_label;


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
			this->additional_detail_panel = (gcnew System::Windows::Forms::Panel());
			this->genre_label = (gcnew System::Windows::Forms::Label());
			this->publisher_label = (gcnew System::Windows::Forms::Label());
			this->translator_label = (gcnew System::Windows::Forms::Label());
			this->summery_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->book_pic))->BeginInit();
			this->panel1->SuspendLayout();
			this->additional_detail_panel->SuspendLayout();
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
			this->panel1->Controls->Add(this->additional_detail_panel);
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
			// additional_detail_panel
			// 
			this->additional_detail_panel->Controls->Add(this->summery_label);
			this->additional_detail_panel->Controls->Add(this->translator_label);
			this->additional_detail_panel->Controls->Add(this->publisher_label);
			this->additional_detail_panel->Controls->Add(this->genre_label);
			this->additional_detail_panel->Location = System::Drawing::Point(0, 0);
			this->additional_detail_panel->Name = L"additional_detail_panel";
			this->additional_detail_panel->Size = System::Drawing::Size(29, 149);
			this->additional_detail_panel->TabIndex = 4;
			this->additional_detail_panel->Visible = false;
			// 
			// genre_label
			// 
			this->genre_label->AutoSize = true;
			this->genre_label->Location = System::Drawing::Point(2, 31);
			this->genre_label->Name = L"genre_label";
			this->genre_label->Size = System::Drawing::Size(46, 17);
			this->genre_label->TabIndex = 0;
			this->genre_label->Text = L"label1";
			// 
			// publisher_label
			// 
			this->publisher_label->AutoSize = true;
			this->publisher_label->Location = System::Drawing::Point(3, 3);
			this->publisher_label->Name = L"publisher_label";
			this->publisher_label->Size = System::Drawing::Size(46, 17);
			this->publisher_label->TabIndex = 1;
			this->publisher_label->Text = L"label2";
			// 
			// translator_label
			// 
			this->translator_label->AutoSize = true;
			this->translator_label->Location = System::Drawing::Point(-9, 66);
			this->translator_label->Name = L"translator_label";
			this->translator_label->Size = System::Drawing::Size(46, 17);
			this->translator_label->TabIndex = 2;
			this->translator_label->Text = L"label1";
			// 
			// summery_label
			// 
			this->summery_label->AutoSize = true;
			this->summery_label->Location = System::Drawing::Point(-4, 104);
			this->summery_label->Name = L"summery_label";
			this->summery_label->Size = System::Drawing::Size(46, 17);
			this->summery_label->TabIndex = 3;
			this->summery_label->Text = L"label1";
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
			this->additional_detail_panel->ResumeLayout(false);
			this->additional_detail_panel->PerformLayout();
			this->ResumeLayout(false);

		}
		BookDetail^ get_detail_for_book_page(Panel^ panel)
		{
			String^ image, ^ title, ^ author, ^ price, ^ genre, ^ translator, ^ publisher;
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
			for each (Label ^ labelprice in panel->Controls->Find("genre_label", true))
			{

				genre = labelprice->Text;

			}
			for each (Label ^ labelprice in panel->Controls->Find("publisher_label", true))
			{

				publisher = labelprice->Text;

			}
			for each (Label ^ labelprice in panel->Controls->Find("translator_label", true))
			{

				translator = labelprice->Text;

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
			for each (RichTextBox ^ bookauthor in page->Controls->Find("book_publisher", true))
			{

				bookauthor->Text = publisher;

			}
			for each (RichTextBox ^ bookauthor in page->Controls->Find("book_translator", true))
			{

				bookauthor->Text = translator;

			}


			return page;
		}
		private: void PassData(BookDetail^ sender)
		{
			// Set de text of the textbox to the value of the textbox of form 2
			MessageBox::Show("success", "success");
		}
#pragma endregion
	BookDetail^ page;
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void book_pic_Click(System::Object^ sender, System::EventArgs^ e) {
	page = get_detail_for_book_page(panel1);
	signinsignup^ form2 = gcnew signinsignup();
	form2->Height = page->Height+30;
	form2->Width = page->Width+10;
	form2->Controls->Add(page);
	form2->Show();


}
};
}
