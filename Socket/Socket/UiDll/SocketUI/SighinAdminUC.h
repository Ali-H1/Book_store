#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SocketUI {

	delegate void adduserhandler();

	/// <summary>
	/// Summary for SighinAdminUC
	/// </summary>
	public ref class SighinAdminUC : public System::Windows::Forms::UserControl
	{
	public:adduserhandler^ addMethod;

	public:
		SighinAdminUC(void)
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
		~SighinAdminUC()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	public: static System::Windows::Forms::TextBox^ username;
	private:
	private: System::Windows::Forms::Button^ add_btn;
	public:




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ admin_password;


	private: System::Windows::Forms::TextBox^ admin_username;
	private: System::Windows::Forms::Button^ enter_btn;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public: static System::Windows::Forms::TextBox^ password;
	private:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ forgot_password;

	private: System::Windows::Forms::Label^ label5;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->forgot_password = (gcnew System::Windows::Forms::Button());
			this->admin_password = (gcnew System::Windows::Forms::TextBox());
			this->admin_username = (gcnew System::Windows::Forms::TextBox());
			this->enter_btn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->username);
			this->panel1->Controls->Add(this->add_btn);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(47, 155);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(367, 332);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::SpringGreen;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(38, 174);
			this->password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->password->Name = L"password";
			this->password->PasswordChar = '.';
			this->password->Size = System::Drawing::Size(291, 34);
			this->password->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(153, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 29);
			this->label2->TabIndex = 26;
			this->label2->Text = L"گذرواژه";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::SpringGreen;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(38, 85);
			this->username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(291, 34);
			this->username->TabIndex = 24;
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::SpringGreen;
			this->add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->add_btn->ForeColor = System::Drawing::Color::Black;
			this->add_btn->Location = System::Drawing::Point(133, 249);
			this->add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(101, 42);
			this->add_btn->TabIndex = 23;
			this->add_btn->Text = L"ثبت";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &SighinAdminUC::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(144, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 29);
			this->label4->TabIndex = 21;
			this->label4->Text = L"نام کاربری";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->forgot_password);
			this->panel2->Controls->Add(this->admin_password);
			this->panel2->Controls->Add(this->admin_username);
			this->panel2->Controls->Add(this->enter_btn);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(445, 124);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(380, 363);
			this->panel2->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::SandyBrown;
			this->label5->Location = System::Drawing::Point(140, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 38);
			this->label5->TabIndex = 27;
			this->label5->Text = L"اکانت رییس";
			// 
			// forgot_password
			// 
			this->forgot_password->BackColor = System::Drawing::Color::SpringGreen;
			this->forgot_password->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forgot_password->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->forgot_password->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->forgot_password->ForeColor = System::Drawing::Color::Black;
			this->forgot_password->Location = System::Drawing::Point(192, 297);
			this->forgot_password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->forgot_password->Name = L"forgot_password";
			this->forgot_password->Size = System::Drawing::Size(152, 42);
			this->forgot_password->TabIndex = 26;
			this->forgot_password->Text = L"فراموشی رمز عبور";
			this->forgot_password->UseVisualStyleBackColor = false;
			// 
			// admin_password
			// 
			this->admin_password->BackColor = System::Drawing::Color::SpringGreen;
			this->admin_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->admin_password->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_password->Location = System::Drawing::Point(53, 222);
			this->admin_password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->admin_password->Name = L"admin_password";
			this->admin_password->PasswordChar = '.';
			this->admin_password->Size = System::Drawing::Size(291, 34);
			this->admin_password->TabIndex = 25;
			// 
			// admin_username
			// 
			this->admin_username->BackColor = System::Drawing::Color::SpringGreen;
			this->admin_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->admin_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_username->Location = System::Drawing::Point(53, 133);
			this->admin_username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->admin_username->Name = L"admin_username";
			this->admin_username->Size = System::Drawing::Size(291, 34);
			this->admin_username->TabIndex = 24;
			// 
			// enter_btn
			// 
			this->enter_btn->BackColor = System::Drawing::Color::SpringGreen;
			this->enter_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enter_btn->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->enter_btn->ForeColor = System::Drawing::Color::Black;
			this->enter_btn->Location = System::Drawing::Point(53, 297);
			this->enter_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->enter_btn->Name = L"enter_btn";
			this->enter_btn->Size = System::Drawing::Size(111, 42);
			this->enter_btn->TabIndex = 23;
			this->enter_btn->Text = L"ورود";
			this->enter_btn->UseVisualStyleBackColor = false;
			this->enter_btn->Click += gcnew System::EventHandler(this, &SighinAdminUC::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(169, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 29);
			this->label3->TabIndex = 22;
			this->label3->Text = L"گذرواژه";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(159, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 29);
			this->label1->TabIndex = 21;
			this->label1->Text = L"نام کاربری";
			// 
			// SighinAdminUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SighinAdminUC";
			this->Size = System::Drawing::Size(867, 677);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		panel2->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (admin_username->Text == "admin" && admin_password->Text == "admin")
		{
			panel1->Show();
			panel2->Visible = false;
		}
		else
		{
			MessageBox::Show("Wrong Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (addMethod != nullptr)
			addMethod();
		MessageBox::Show(" Accept ");

	}
};
}
