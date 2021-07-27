#pragma once
#include "signup.h"
#include<fstream>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::Runtime::InteropServices;

using std::fstream;
delegate void signinHandler();
delegate void writefileHandler();

namespace bookstore {

	/// <summary>
	/// Summary for signin
	/// </summary>
	public ref class signin : public System::Windows::Forms::UserControl
	{
	public:
		static String ^Data;
		static signinHandler^ signinMethod;
		static writefileHandler^ writeMethod;
		signin(void)
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
		~signin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:







	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ enter_btn;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->enter_btn = (gcnew System::Windows::Forms::Button());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(477, 639);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(176, 613);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"All rights reserved";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(71, 330);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 73);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Amazone";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(142, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(195, 104);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(589, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"نام کاربری";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(591, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"گذرواژه";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// enter_btn
			// 
			this->enter_btn->BackColor = System::Drawing::Color::SteelBlue;
			this->enter_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enter_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enter_btn->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->enter_btn->ForeColor = System::Drawing::Color::White;
			this->enter_btn->Location = System::Drawing::Point(659, 464);
			this->enter_btn->Name = L"enter_btn";
			this->enter_btn->Size = System::Drawing::Size(111, 37);
			this->enter_btn->TabIndex = 10;
			this->enter_btn->Text = L"ورود";
			this->enter_btn->UseVisualStyleBackColor = false;
			this->enter_btn->Click += gcnew System::EventHandler(this, &signin::button1_Click);
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::White;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(595, 195);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(290, 23);
			this->username->TabIndex = 11;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::White;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(595, 309);
			this->password->Name = L"password";
			this->password->PasswordChar = '.';
			this->password->Size = System::Drawing::Size(290, 34);
			this->password->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Location = System::Drawing::Point(593, 347);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(290, 10);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Location = System::Drawing::Point(593, 225);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(290, 10);
			this->textBox4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label5->Location = System::Drawing::Point(632, 516);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 27);
			this->label5->TabIndex = 15;
			this->label5->Text = L"رمز عبورم را فراموش کردم";
			// 
			// signin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->enter_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->Name = L"signin";
			this->Size = System::Drawing::Size(946, 639);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		static void MarshalwString(String^ s, wstring& os) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	String ^signin_res;
	void open_file()
	{
		Thread::Sleep(2500);
		std::ifstream file("result.txt", std::ios::in);
		string res;
		file >> res;
		String^ Text = gcnew String(res.c_str());
		signin_res = Text;
		file.close();
		ready = true;
	}
	bool ready = false;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	signed_in = true;
	if (username->Text != "" && password->Text != "")
	{
			signed_in = true;
		Data = L"[sign in]- username:" + username->Text + L"| password:" +password->Text;
		if (writeMethod != nullptr)
			writeMethod();


		if (signinMethod != nullptr)
			signinMethod();
		Thread^ thread_send = gcnew Thread(gcnew ThreadStart(this, &signin::open_file));
		thread_send->Start();
		while (!ready)
		{
			int a = 3;
		}
		if (signin_res == "ok")
		{
			MessageBox::Show("success", "success");

		}
		else if (signin_res == "error")
		{
			MessageBox::Show("not found", "error");
		}
	}

}
};
}
