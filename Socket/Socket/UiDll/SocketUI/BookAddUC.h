#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SocketUI {

	/// <summary>
	/// Summary for BookAddUC
	/// </summary>
	public ref class BookAddUC : public System::Windows::Forms::UserControl
	{
	public:
		BookAddUC(void)
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
		~BookAddUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(637, 494);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Location = System::Drawing::Point(490, 299);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(114, 67);
			this->panel2->TabIndex = 102;
			this->panel2->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(54, 30);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->PasswordChar = '.';
			this->textBox7->Size = System::Drawing::Size(57, 27);
			this->textBox7->TabIndex = 60;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label12->Location = System::Drawing::Point(76, 4);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 24);
			this->label12->TabIndex = 59;
			this->label12->Text = L"حجم";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::SpringGreen;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->checkBox2->Location = System::Drawing::Point(544, 214);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 28);
			this->checkBox2->TabIndex = 101;
			this->checkBox2->Text = L"موجود";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(251, 156);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(103, 28);
			this->textBox10->TabIndex = 100;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(501, 100);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(103, 28);
			this->textBox9->TabIndex = 99;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(501, 156);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(103, 28);
			this->textBox8->TabIndex = 98;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(374, 44);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(103, 28);
			this->textBox6->TabIndex = 97;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(374, 100);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(103, 28);
			this->textBox5->TabIndex = 96;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(374, 153);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(103, 28);
			this->textBox4->TabIndex = 95;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(251, 44);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(103, 28);
			this->textBox3->TabIndex = 94;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(251, 100);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(103, 28);
			this->textBox2->TabIndex = 93;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SpringGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button5->Location = System::Drawing::Point(38, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 31);
			this->button5->TabIndex = 92;
			this->button5->Text = L"اپلود عکس";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SpringGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button2->Location = System::Drawing::Point(38, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 91;
			this->button2->Text = L"اپلود فایل ";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::SpringGreen;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->checkBox1->Location = System::Drawing::Point(533, 265);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(71, 28);
			this->checkBox1->TabIndex = 90;
			this->checkBox1->Text = L"دیجیتال";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &BookAddUC::checkBox1_CheckedChanged);
			this->checkBox1->Click += gcnew System::EventHandler(this, &BookAddUC::checkBox1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox1->Location = System::Drawing::Point(251, 214);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(226, 125);
			this->richTextBox1->TabIndex = 89;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->pictureBox1->Location = System::Drawing::Point(27, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 137);
			this->pictureBox1->TabIndex = 88;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(342, 342);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 24);
			this->label5->TabIndex = 87;
			this->label5->Text = L"خلاصه";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(446, 74);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 24);
			this->label7->TabIndex = 86;
			this->label7->Text = L"زبان";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->Location = System::Drawing::Point(573, 74);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 24);
			this->label8->TabIndex = 85;
			this->label8->Text = L"ناشر";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->Location = System::Drawing::Point(328, 74);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 24);
			this->label9->TabIndex = 84;
			this->label9->Text = L"ژانر";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label10->Location = System::Drawing::Point(316, 130);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 24);
			this->label10->TabIndex = 83;
			this->label10->Text = L"قیمت";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(398, 130);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 24);
			this->label6->TabIndex = 82;
			this->label6->Text = L"شماره ویرایش";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(542, 130);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 24);
			this->label1->TabIndex = 81;
			this->label1->Text = L"تاریخ چاپ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(295, 18);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 24);
			this->label2->TabIndex = 80;
			this->label2->Text = L"نام مترجم";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(501, 44);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(103, 28);
			this->textBox1->TabIndex = 79;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(410, 18);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 24);
			this->label3->TabIndex = 78;
			this->label3->Text = L"نام نویسنده";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(547, 18);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 24);
			this->label4->TabIndex = 77;
			this->label4->Text = L"نام کتاب ";
			// 
			// BookAddUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->panel1);
			this->Name = L"BookAddUC";
			this->Size = System::Drawing::Size(640, 500);
			this->Load += gcnew System::EventHandler(this, &BookAddUC::BookAddUC_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BookAddUC_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox1->Checked) {

		panel2->Visible = true;
	}
	else {

		panel2->Visible = false;

	}
}
};
}
