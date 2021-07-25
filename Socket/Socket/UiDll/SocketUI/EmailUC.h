#pragma once
#include "EmailHandler.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::IO;
using namespace System::Runtime::InteropServices;


namespace SocketUI {

	/// <summary>
	/// Summary for EmailUC
	/// </summary>
	public ref class EmailUC : public System::Windows::Forms::UserControl
	{
	public:
		EmailUC(void)
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
		~EmailUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ password_input;
	protected:

	private: System::Windows::Forms::TextBox^ username_input;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ to_input;

	private: System::Windows::Forms::TextBox^ sender_input;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ subject_input;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ text_input;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ smtp_input;

	private: System::Windows::Forms::Label^ label6;

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
			this->password_input = (gcnew System::Windows::Forms::TextBox());
			this->username_input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->to_input = (gcnew System::Windows::Forms::TextBox());
			this->sender_input = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->subject_input = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->text_input = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->smtp_input = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// password_input
			// 
			this->password_input->BackColor = System::Drawing::Color::Lime;
			this->password_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_input->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_input->Location = System::Drawing::Point(539, 238);
			this->password_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->password_input->Name = L"password_input";
			this->password_input->PasswordChar = '.';
			this->password_input->Size = System::Drawing::Size(291, 34);
			this->password_input->TabIndex = 23;
			// 
			// username_input
			// 
			this->username_input->BackColor = System::Drawing::Color::Lime;
			this->username_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_input->Location = System::Drawing::Point(539, 156);
			this->username_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username_input->Name = L"username_input";
			this->username_input->Size = System::Drawing::Size(291, 34);
			this->username_input->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(768, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 29);
			this->label3->TabIndex = 21;
			this->label3->Text = L"گذرواژه";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(748, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"نام کاربری";
			// 
			// to_input
			// 
			this->to_input->BackColor = System::Drawing::Color::Lime;
			this->to_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->to_input->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->to_input->Location = System::Drawing::Point(539, 404);
			this->to_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->to_input->Name = L"to_input";
			this->to_input->PasswordChar = '.';
			this->to_input->Size = System::Drawing::Size(291, 34);
			this->to_input->TabIndex = 27;
			// 
			// sender_input
			// 
			this->sender_input->BackColor = System::Drawing::Color::Lime;
			this->sender_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sender_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sender_input->Location = System::Drawing::Point(539, 320);
			this->sender_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sender_input->Name = L"sender_input";
			this->sender_input->Size = System::Drawing::Size(291, 34);
			this->sender_input->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(772, 372);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 29);
			this->label1->TabIndex = 25;
			this->label1->Text = L"گیرنده";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(761, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 29);
			this->label2->TabIndex = 24;
			this->label2->Text = L"فرستنده";
			// 
			// subject_input
			// 
			this->subject_input->BackColor = System::Drawing::Color::Lime;
			this->subject_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->subject_input->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subject_input->Location = System::Drawing::Point(37, 158);
			this->subject_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->subject_input->Name = L"subject_input";
			this->subject_input->PasswordChar = '.';
			this->subject_input->Size = System::Drawing::Size(352, 34);
			this->subject_input->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(332, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 29);
			this->label5->TabIndex = 28;
			this->label5->Text = L"موضوع";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// text_input
			// 
			this->text_input->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->text_input->Location = System::Drawing::Point(37, 239);
			this->text_input->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->text_input->Name = L"text_input";
			this->text_input->Size = System::Drawing::Size(351, 198);
			this->text_input->TabIndex = 30;
			this->text_input->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(165, 478);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 42);
			this->button1->TabIndex = 31;
			this->button1->Text = L"ارسال ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EmailUC::button1_Click);
			// 
			// smtp_input
			// 
			this->smtp_input->BackColor = System::Drawing::Color::Lime;
			this->smtp_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->smtp_input->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->smtp_input->Location = System::Drawing::Point(539, 485);
			this->smtp_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->smtp_input->Name = L"smtp_input";
			this->smtp_input->PasswordChar = '.';
			this->smtp_input->Size = System::Drawing::Size(291, 34);
			this->smtp_input->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(767, 453);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 29);
			this->label6->TabIndex = 32;
			this->label6->Text = L"smtp";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// EmailUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->smtp_input);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->text_input);
			this->Controls->Add(this->subject_input);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->to_input);
			this->Controls->Add(this->sender_input);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->password_input);
			this->Controls->Add(this->username_input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"EmailUC";
			this->Size = System::Drawing::Size(867, 677);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ to, ^ subject, ^ mssg;
		void send_mail()
		{
			if (to != "" && subject != "" && mssg != "")
			{
				Email mail;
				mail.send_mail(to, subject, mssg);
				MessageBox::Show("Mail Sent!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("Invalid Input!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				
			}

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		mssg = to = subject = "";
		to = to_input->Text;
		subject = subject_input->Text;
		mssg = text_input->Text;
		Thread^ thread_send = gcnew Thread(gcnew ThreadStart(this, &EmailUC::send_mail));
		thread_send->Start();
	}
};
}
