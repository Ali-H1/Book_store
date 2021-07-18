#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for ShoppingCart
	/// </summary>
	public ref class ShoppingCart : public System::Windows::Forms::UserControl
	{
	public:
		ShoppingCart(void)
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
		~ShoppingCart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;







	private: System::Windows::Forms::RichTextBox^ Summery;
	private: System::Windows::Forms::Label^ price_label;


	private: System::Windows::Forms::Button^ Delete;




	private: System::Windows::Forms::PictureBox^ Cover;
	private: System::Windows::Forms::RichTextBox^ Title;
	private: System::Windows::Forms::RichTextBox^ Author;
	private: System::Windows::Forms::RichTextBox^ Translator;
	private: System::Windows::Forms::Label^ amount;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShoppingCart::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Author = (gcnew System::Windows::Forms::RichTextBox());
			this->Translator = (gcnew System::Windows::Forms::RichTextBox());
			this->Title = (gcnew System::Windows::Forms::RichTextBox());
			this->Cover = (gcnew System::Windows::Forms::PictureBox());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->Summery = (gcnew System::Windows::Forms::RichTextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->amount = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cover))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->amount);
			this->panel1->Controls->Add(this->Author);
			this->panel1->Controls->Add(this->Translator);
			this->panel1->Controls->Add(this->Title);
			this->panel1->Controls->Add(this->Cover);
			this->panel1->Controls->Add(this->Delete);
			this->panel1->Controls->Add(this->price_label);
			this->panel1->Controls->Add(this->Summery);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1237, 358);
			this->panel1->TabIndex = 0;
			// 
			// Author
			// 
			this->Author->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Author->BackColor = System::Drawing::Color::White;
			this->Author->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Author->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Author->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Author->Location = System::Drawing::Point(840, 89);
			this->Author->Multiline = false;
			this->Author->Name = L"Author";
			this->Author->ReadOnly = true;
			this->Author->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Author->Size = System::Drawing::Size(163, 26);
			this->Author->TabIndex = 12;
			this->Author->Text = L"نویسنده";
			// 
			// Translator
			// 
			this->Translator->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Translator->BackColor = System::Drawing::Color::White;
			this->Translator->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Translator->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Translator->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Translator->Location = System::Drawing::Point(839, 123);
			this->Translator->Multiline = false;
			this->Translator->Name = L"Translator";
			this->Translator->ReadOnly = true;
			this->Translator->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Translator->Size = System::Drawing::Size(163, 26);
			this->Translator->TabIndex = 11;
			this->Translator->Text = L"مترجم";
			// 
			// Title
			// 
			this->Title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Title->BackColor = System::Drawing::Color::White;
			this->Title->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Title->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Title->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Title->Location = System::Drawing::Point(837, 43);
			this->Title->Multiline = false;
			this->Title->Name = L"Title";
			this->Title->ReadOnly = true;
			this->Title->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Title->Size = System::Drawing::Size(163, 47);
			this->Title->TabIndex = 10;
			this->Title->Text = L"نام کتاب";
			// 
			// Cover
			// 
			this->Cover->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Cover->Location = System::Drawing::Point(1026, 37);
			this->Cover->Name = L"Cover";
			this->Cover->Size = System::Drawing::Size(147, 270);
			this->Cover->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cover->TabIndex = 9;
			this->Cover->TabStop = false;
			// 
			// Delete
			// 
			this->Delete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Delete->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.BackgroundImage")));
			this->Delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Location = System::Drawing::Point(26, 292);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(49, 37);
			this->Delete->TabIndex = 8;
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &ShoppingCart::Delete_Click);
			// 
			// price_label
			// 
			this->price_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->price_label->AutoSize = true;
			this->price_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->price_label->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18.2F, System::Drawing::FontStyle::Bold));
			this->price_label->ForeColor = System::Drawing::Color::DarkGreen;
			this->price_label->Location = System::Drawing::Point(57, 50);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(87, 49);
			this->price_label->TabIndex = 7;
			this->price_label->Text = L"20.000";
			// 
			// Summery
			// 
			this->Summery->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Summery->BackColor = System::Drawing::Color::White;
			this->Summery->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Summery->CausesValidation = false;
			this->Summery->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Summery->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Summery->Location = System::Drawing::Point(256, 155);
			this->Summery->Name = L"Summery";
			this->Summery->ReadOnly = true;
			this->Summery->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Summery->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->Summery->Size = System::Drawing::Size(659, 175);
			this->Summery->TabIndex = 6;
			this->Summery->Text = resources->GetString(L"Summery.Text");
			this->Summery->TextChanged += gcnew System::EventHandler(this, &ShoppingCart::richTextBox2_TextChanged);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(943, 20);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(0, 0);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// amount
			// 
			this->amount->AutoSize = true;
			this->amount->BackColor = System::Drawing::Color::WhiteSmoke;
			this->amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->amount->Location = System::Drawing::Point(41, 254);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(20, 24);
			this->amount->TabIndex = 13;
			this->amount->Text = L"1";
			// 
			// ShoppingCart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Name = L"ShoppingCart";
			this->Size = System::Drawing::Size(1237, 358);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cover))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	delete this;
}
};
}
