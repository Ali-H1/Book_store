#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for Virtual_Payment_System
	/// </summary>
	public ref class Virtual_Payment_System : public System::Windows::Forms::UserControl
	{
	public:
		Virtual_Payment_System(void)
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
		~Virtual_Payment_System()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Virtual_Payment_System::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox1->Location = System::Drawing::Point(26, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 28);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox2->Location = System::Drawing::Point(232, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 28);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox3->Location = System::Drawing::Point(164, 42);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 28);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox4->Location = System::Drawing::Point(95, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 28);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(75, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(212, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(144, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->Location = System::Drawing::Point(280, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"-";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox5->Location = System::Drawing::Point(303, 42);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(44, 28);
			this->textBox5->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 11.8F));
			this->label2->Location = System::Drawing::Point(380, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 29);
			this->label2->TabIndex = 10;
			this->label2->Text = L"شماره کارت";
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox6->Location = System::Drawing::Point(26, 107);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(321, 28);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 11.8F));
			this->label6->Location = System::Drawing::Point(380, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 29);
			this->label6->TabIndex = 12;
			this->label6->Text = L"رمز اینترنتی";
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox7->Location = System::Drawing::Point(26, 162);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(321, 28);
			this->textBox7->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Book", 11));
			this->label7->Location = System::Drawing::Point(396, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"CVV2";
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox8->Location = System::Drawing::Point(66, 227);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(94, 28);
			this->textBox8->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox9->Location = System::Drawing::Point(225, 227);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(94, 28);
			this->textBox9->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9.8F));
			this->label8->Location = System::Drawing::Point(166, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 26);
			this->label8->TabIndex = 17;
			this->label8->Text = L":سال";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9.8F));
			this->label9->Location = System::Drawing::Point(325, 228);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 26);
			this->label9->TabIndex = 18;
			this->label9->Text = L":ماه";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 11.8F));
			this->label10->Location = System::Drawing::Point(380, 226);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 29);
			this->label10->TabIndex = 19;
			this->label10->Text = L"تاریخ انقضا";
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->textBox10->Location = System::Drawing::Point(95, 304);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(94, 28);
			this->textBox10->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 11.8F));
			this->label11->Location = System::Drawing::Point(380, 304);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 29);
			this->label11->TabIndex = 22;
			this->label11->Text = L"کد امنیتی";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(216, 282);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(134, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::SpringGreen;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(272, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 24;
			this->button1->Text = L"پرداخت";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button2->Location = System::Drawing::Point(164, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 25;
			this->button2->Text = L"انصراف";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Location = System::Drawing::Point(574, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(482, 563);
			this->panel1->TabIndex = 26;
			// 
			// Virtual_Payment_System
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Name = L"Virtual_Payment_System";
			this->Size = System::Drawing::Size(1069, 605);
			this->Load += gcnew System::EventHandler(this, &Virtual_Payment_System::Virtual_Payment_System_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Virtual_Payment_System_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
