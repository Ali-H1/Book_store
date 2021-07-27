#pragma once
#include <string>
#include <codecvt>
#include <locale>
#include <vector>
#include <tuple>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using std::to_string;
using std::wstring;
using std::vector;
using std::tuple;
using std::string;
namespace SocketUI {



	/// <summary>
	/// Summary for BookRemoveUC
	/// </summary>
	public ref class BookRemoveUC : public System::Windows::Forms::UserControl
	{
	public:


		BookRemoveUC(void)
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
		~BookRemoveUC()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;







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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->panel1->Location = System::Drawing::Point(4, 207);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(845, 386);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Location = System::Drawing::Point(593, 309);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(152, 70);
			this->panel2->TabIndex = 102;
			this->panel2->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(72, 32);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->PasswordChar = '.';
			this->textBox7->Size = System::Drawing::Size(76, 34);
			this->textBox7->TabIndex = 60;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label12->Location = System::Drawing::Point(101, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 29);
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
			this->checkBox2->Location = System::Drawing::Point(661, 225);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(75, 33);
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
			this->textBox10->Location = System::Drawing::Point(275, 178);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(137, 34);
			this->textBox10->TabIndex = 100;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(608, 110);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(137, 34);
			this->textBox9->TabIndex = 99;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(608, 178);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(137, 34);
			this->textBox8->TabIndex = 98;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(439, 41);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 34);
			this->textBox6->TabIndex = 97;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(439, 110);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 34);
			this->textBox5->TabIndex = 96;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(439, 175);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 34);
			this->textBox4->TabIndex = 95;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(275, 41);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 34);
			this->textBox3->TabIndex = 94;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(275, 110);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 34);
			this->textBox2->TabIndex = 93;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SpringGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button5->Location = System::Drawing::Point(108, 247);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 38);
			this->button5->TabIndex = 92;
			this->button5->Text = L"اپلود عکس";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SpringGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button2->Location = System::Drawing::Point(108, 309);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 38);
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
			this->checkBox1->Location = System::Drawing::Point(651, 267);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(86, 33);
			this->checkBox1->TabIndex = 90;
			this->checkBox1->Text = L"دیجیتال";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &BookRemoveUC::checkBox1_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->richTextBox1->Location = System::Drawing::Point(275, 235);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(300, 111);
			this->richTextBox1->TabIndex = 89;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->pictureBox1->Location = System::Drawing::Point(95, 41);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 169);
			this->pictureBox1->TabIndex = 88;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(396, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 29);
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
			this->label7->Location = System::Drawing::Point(535, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 29);
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
			this->label8->Location = System::Drawing::Point(704, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 29);
			this->label8->TabIndex = 85;
			this->label8->Text = L"ناشر";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->Location = System::Drawing::Point(377, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 29);
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
			this->label10->Location = System::Drawing::Point(361, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 29);
			this->label10->TabIndex = 83;
			this->label10->Text = L"قیمت";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(471, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 29);
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
			this->label1->Location = System::Drawing::Point(663, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 29);
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
			this->label2->Location = System::Drawing::Point(333, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 29);
			this->label2->TabIndex = 80;
			this->label2->Text = L"نام مترجم";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(608, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 34);
			this->textBox1->TabIndex = 79;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(487, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 29);
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
			this->label4->Location = System::Drawing::Point(669, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 29);
			this->label4->TabIndex = 77;
			this->label4->Text = L"نام کتاب ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::MediumSeaGreen;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(809, 172);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Title";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Author";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Genre";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"publish year";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Edition";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Translator";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Price";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Publisher";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Language";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Summery";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Available";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 125;
			// 
			// BookRemoveUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BookRemoveUC";
			this->Size = System::Drawing::Size(853, 615);
			this->Load += gcnew System::EventHandler(this, &BookRemoveUC::BookRemoveUC_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BookRemoveUC_Load(System::Object^ sender, System::EventArgs^ e) {
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
