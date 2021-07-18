#pragma once
#include "Headers/check_validity.h"
#include <string>
#include<regex>
//#include <msclr\marshal.h>
//#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text::RegularExpressions;
using std::string;
using std::wstring;


namespace bookstore {
	static bool signed_in = true;

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class signup : public System::Windows::Forms::UserControl
	{
	public:
		signup(void)
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
		~signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ pass2_bar;

	private: System::Windows::Forms::TextBox^ pass1_bar;



	private: System::Windows::Forms::Button^ signup_bttn;



	public: static System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ fname_bar;
	private: System::Windows::Forms::TextBox^ lname_bar;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ email_bar;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel_gender;

	private: System::Windows::Forms::RadioButton^ user_input_female;
	private: System::Windows::Forms::RadioButton^ user_input_male;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ user_input_birth_day;

	private: System::Windows::Forms::ComboBox^ user_input_birth_month;

	private: System::Windows::Forms::ComboBox^ user_input_birth_year;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::RichTextBox^ user_input_fname;
	private: System::Windows::Forms::RichTextBox^ user_input_lname;
	private: System::Windows::Forms::RichTextBox^ user_input_email;
	private: System::Windows::Forms::RichTextBox^ user_input_password;
	private: System::Windows::Forms::RichTextBox^ user_input_password2;
	private: System::Windows::Forms::RichTextBox^ user_input_address;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ user_input_postalcode;
	private: System::Windows::Forms::TextBox^ postalcode_bar;

	private: System::Windows::Forms::Label^ label14;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signup::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pass2_bar = (gcnew System::Windows::Forms::TextBox());
			this->pass1_bar = (gcnew System::Windows::Forms::TextBox());
			this->signup_bttn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fname_bar = (gcnew System::Windows::Forms::TextBox());
			this->lname_bar = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->email_bar = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel_gender = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->user_input_female = (gcnew System::Windows::Forms::RadioButton());
			this->user_input_male = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->user_input_birth_day = (gcnew System::Windows::Forms::ComboBox());
			this->user_input_birth_month = (gcnew System::Windows::Forms::ComboBox());
			this->user_input_birth_year = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->user_input_fname = (gcnew System::Windows::Forms::RichTextBox());
			this->user_input_lname = (gcnew System::Windows::Forms::RichTextBox());
			this->user_input_email = (gcnew System::Windows::Forms::RichTextBox());
			this->user_input_password = (gcnew System::Windows::Forms::RichTextBox());
			this->user_input_password2 = (gcnew System::Windows::Forms::RichTextBox());
			this->user_input_address = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->user_input_postalcode = (gcnew System::Windows::Forms::RichTextBox());
			this->postalcode_bar = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel_gender->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SandyBrown;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(527, 818);
			this->panel1->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(181, 783);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"All rights reserved";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Magneto", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 471);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(336, 73);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Amazone";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(145, 241);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(195, 104);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pass2_bar
			// 
			this->pass2_bar->BackColor = System::Drawing::Color::RoyalBlue;
			this->pass2_bar->Cursor = System::Windows::Forms::Cursors::Default;
			this->pass2_bar->Location = System::Drawing::Point(811, 382);
			this->pass2_bar->Multiline = true;
			this->pass2_bar->Name = L"pass2_bar";
			this->pass2_bar->ReadOnly = true;
			this->pass2_bar->Size = System::Drawing::Size(171, 10);
			this->pass2_bar->TabIndex = 28;
			// 
			// pass1_bar
			// 
			this->pass1_bar->BackColor = System::Drawing::Color::RoyalBlue;
			this->pass1_bar->Cursor = System::Windows::Forms::Cursors::Default;
			this->pass1_bar->Location = System::Drawing::Point(593, 383);
			this->pass1_bar->Multiline = true;
			this->pass1_bar->Name = L"pass1_bar";
			this->pass1_bar->ReadOnly = true;
			this->pass1_bar->Size = System::Drawing::Size(175, 11);
			this->pass1_bar->TabIndex = 27;
			// 
			// signup_bttn
			// 
			this->signup_bttn->BackColor = System::Drawing::Color::RoyalBlue;
			this->signup_bttn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup_bttn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup_bttn->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->signup_bttn->ForeColor = System::Drawing::Color::White;
			this->signup_bttn->Location = System::Drawing::Point(731, 735);
			this->signup_bttn->Name = L"signup_bttn";
			this->signup_bttn->Size = System::Drawing::Size(111, 37);
			this->signup_bttn->TabIndex = 24;
			this->signup_bttn->Text = L"ثبت نام";
			this->signup_bttn->UseVisualStyleBackColor = false;
			this->signup_bttn->Click += gcnew System::EventHandler(this, &signup::signup_bttn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(593, 305);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 29);
			this->label1->TabIndex = 23;
			this->label1->Text = L"گذرواژه";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &signup::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(807, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"تکرار گذرواژه";
			// 
			// fname_bar
			// 
			this->fname_bar->BackColor = System::Drawing::Color::RoyalBlue;
			this->fname_bar->Cursor = System::Windows::Forms::Cursors::Default;
			this->fname_bar->Location = System::Drawing::Point(593, 154);
			this->fname_bar->Multiline = true;
			this->fname_bar->Name = L"fname_bar";
			this->fname_bar->ReadOnly = true;
			this->fname_bar->Size = System::Drawing::Size(184, 10);
			this->fname_bar->TabIndex = 34;
			// 
			// lname_bar
			// 
			this->lname_bar->BackColor = System::Drawing::Color::RoyalBlue;
			this->lname_bar->Cursor = System::Windows::Forms::Cursors::Default;
			this->lname_bar->Location = System::Drawing::Point(811, 153);
			this->lname_bar->Multiline = true;
			this->lname_bar->Name = L"lname_bar";
			this->lname_bar->ReadOnly = true;
			this->lname_bar->Size = System::Drawing::Size(179, 10);
			this->lname_bar->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(807, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 29);
			this->label5->TabIndex = 30;
			this->label5->Text = L"نام خانوادگی";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(590, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 29);
			this->label6->TabIndex = 29;
			this->label6->Text = L"نام ";
			// 
			// email_bar
			// 
			this->email_bar->BackColor = System::Drawing::Color::RoyalBlue;
			this->email_bar->Cursor = System::Windows::Forms::Cursors::Default;
			this->email_bar->Location = System::Drawing::Point(594, 265);
			this->email_bar->Multiline = true;
			this->email_bar->Name = L"email_bar";
			this->email_bar->ReadOnly = true;
			this->email_bar->Size = System::Drawing::Size(365, 10);
			this->email_bar->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(591, 191);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 29);
			this->label7->TabIndex = 35;
			this->label7->Text = L"ایمیل";
			// 
			// panel_gender
			// 
			this->panel_gender->Controls->Add(this->label9);
			this->panel_gender->Controls->Add(this->user_input_female);
			this->panel_gender->Controls->Add(this->user_input_male);
			this->panel_gender->Location = System::Drawing::Point(855, 522);
			this->panel_gender->Name = L"panel_gender";
			this->panel_gender->Size = System::Drawing::Size(125, 82);
			this->panel_gender->TabIndex = 39;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->Location = System::Drawing::Point(3, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 29);
			this->label9->TabIndex = 41;
			this->label9->Text = L"جنسیت";
			// 
			// user_input_female
			// 
			this->user_input_female->AutoSize = true;
			this->user_input_female->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_female->Location = System::Drawing::Point(70, 49);
			this->user_input_female->Name = L"user_input_female";
			this->user_input_female->Size = System::Drawing::Size(47, 30);
			this->user_input_female->TabIndex = 1;
			this->user_input_female->TabStop = true;
			this->user_input_female->Text = L"زن";
			this->user_input_female->UseVisualStyleBackColor = true;
			// 
			// user_input_male
			// 
			this->user_input_male->AutoSize = true;
			this->user_input_male->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_male->Location = System::Drawing::Point(9, 49);
			this->user_input_male->Name = L"user_input_male";
			this->user_input_male->Size = System::Drawing::Size(50, 30);
			this->user_input_male->TabIndex = 0;
			this->user_input_male->TabStop = true;
			this->user_input_male->Text = L"مرد";
			this->user_input_male->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label10->Location = System::Drawing::Point(589, 620);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 29);
			this->label10->TabIndex = 41;
			this->label10->Text = L"تاریخ تولد";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// user_input_birth_day
			// 
			this->user_input_birth_day->FormattingEnabled = true;
			this->user_input_birth_day->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"---", L"1", L"2", L"3", L"4", L"5",
					L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->user_input_birth_day->Location = System::Drawing::Point(886, 668);
			this->user_input_birth_day->Name = L"user_input_birth_day";
			this->user_input_birth_day->Size = System::Drawing::Size(94, 24);
			this->user_input_birth_day->TabIndex = 42;
			// 
			// user_input_birth_month
			// 
			this->user_input_birth_month->FormattingEnabled = true;
			this->user_input_birth_month->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"---", L"فروردين", L"ارديبهشت", L"خرداد",
					L"تير", L"مرداد", L"شهريور", L"مهر", L"آبان", L"آذر", L"دى", L"بهمن", L"اسفند"
			});
			this->user_input_birth_month->Location = System::Drawing::Point(748, 668);
			this->user_input_birth_month->Name = L"user_input_birth_month";
			this->user_input_birth_month->Size = System::Drawing::Size(105, 24);
			this->user_input_birth_month->TabIndex = 43;
			// 
			// user_input_birth_year
			// 
			this->user_input_birth_year->FormattingEnabled = true;
			this->user_input_birth_year->Items->AddRange(gcnew cli::array< System::Object^  >(102) {
				L"---", L"1400", L"1399", L"1398",
					L"1397", L"1396", L"1395", L"1394", L"1393", L"1392", L"1391", L"1390", L"1389", L"1388", L"1387", L"1386", L"1385", L"1384",
					L"1383", L"1382", L"1381", L"1380", L"1379", L"1378", L"1377", L"1376", L"1375", L"1374", L"1373", L"1372", L"1371", L"1370",
					L"1369", L"1368", L"1367", L"1366", L"1365", L"1364", L"1363", L"1362", L"1361", L"1360", L"1359", L"1358", L"1357", L"1356",
					L"1355", L"1354", L"1353", L"1352", L"1351", L"1350", L"1349", L"1348", L"1347", L"1346", L"1345", L"1344", L"1343", L"1342",
					L"1341", L"1340", L"1339", L"1338", L"1337", L"1336", L"1335", L"1334", L"1333", L"1332", L"1331", L"1330", L"1329", L"1328",
					L"1327", L"1326", L"1325", L"1324", L"1323", L"1322", L"1321", L"1320", L"1319", L"1318", L"1317", L"1316", L"1315", L"1314",
					L"1313", L"1312", L"1311", L"1310", L"1309", L"1308", L"1307", L"1306", L"1305", L"1304", L"1303", L"1302", L"1301", L"1300"
			});
			this->user_input_birth_year->Location = System::Drawing::Point(616, 669);
			this->user_input_birth_year->Name = L"user_input_birth_year";
			this->user_input_birth_year->Size = System::Drawing::Size(97, 24);
			this->user_input_birth_year->TabIndex = 44;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(593, 672);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 17);
			this->label11->TabIndex = 45;
			this->label11->Text = L"y:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(863, 671);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 17);
			this->label12->TabIndex = 46;
			this->label12->Text = L"d:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(723, 671);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 17);
			this->label13->TabIndex = 47;
			this->label13->Text = L"m:";
			// 
			// user_input_fname
			// 
			this->user_input_fname->BackColor = System::Drawing::Color::White;
			this->user_input_fname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_fname->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_fname->Location = System::Drawing::Point(591, 119);
			this->user_input_fname->Multiline = false;
			this->user_input_fname->Name = L"user_input_fname";
			this->user_input_fname->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->user_input_fname->Size = System::Drawing::Size(188, 34);
			this->user_input_fname->TabIndex = 48;
			this->user_input_fname->Text = L"";
			// 
			// user_input_lname
			// 
			this->user_input_lname->BackColor = System::Drawing::Color::White;
			this->user_input_lname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_lname->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_lname->Location = System::Drawing::Point(811, 119);
			this->user_input_lname->Multiline = false;
			this->user_input_lname->Name = L"user_input_lname";
			this->user_input_lname->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->user_input_lname->Size = System::Drawing::Size(183, 34);
			this->user_input_lname->TabIndex = 49;
			this->user_input_lname->Text = L"";
			// 
			// user_input_email
			// 
			this->user_input_email->BackColor = System::Drawing::Color::White;
			this->user_input_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->user_input_email->Location = System::Drawing::Point(595, 223);
			this->user_input_email->Multiline = false;
			this->user_input_email->Name = L"user_input_email";
			this->user_input_email->Size = System::Drawing::Size(363, 41);
			this->user_input_email->TabIndex = 50;
			this->user_input_email->Text = L"";
			// 
			// user_input_password
			// 
			this->user_input_password->BackColor = System::Drawing::Color::White;
			this->user_input_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_password->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_password->Location = System::Drawing::Point(598, 337);
			this->user_input_password->Multiline = false;
			this->user_input_password->Name = L"user_input_password";
			this->user_input_password->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->user_input_password->Size = System::Drawing::Size(167, 42);
			this->user_input_password->TabIndex = 51;
			this->user_input_password->Text = L"";
			// 
			// user_input_password2
			// 
			this->user_input_password2->BackColor = System::Drawing::Color::White;
			this->user_input_password2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_password2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_password2->Location = System::Drawing::Point(813, 337);
			this->user_input_password2->Multiline = false;
			this->user_input_password2->Name = L"user_input_password2";
			this->user_input_password2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->user_input_password2->Size = System::Drawing::Size(169, 42);
			this->user_input_password2->TabIndex = 52;
			this->user_input_password2->Text = L"";
			// 
			// user_input_address
			// 
			this->user_input_address->BackColor = System::Drawing::Color::White;
			this->user_input_address->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_address->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_address->Location = System::Drawing::Point(595, 447);
			this->user_input_address->Name = L"user_input_address";
			this->user_input_address->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->user_input_address->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->user_input_address->Size = System::Drawing::Size(382, 42);
			this->user_input_address->TabIndex = 55;
			this->user_input_address->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Location = System::Drawing::Point(590, 493);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(390, 11);
			this->textBox1->TabIndex = 54;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->Location = System::Drawing::Point(590, 415);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 36);
			this->label8->TabIndex = 53;
			this->label8->Text = L"آدرس";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// user_input_postalcode
			// 
			this->user_input_postalcode->BackColor = System::Drawing::Color::White;
			this->user_input_postalcode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_input_postalcode->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->user_input_postalcode->Location = System::Drawing::Point(595, 547);
			this->user_input_postalcode->Multiline = false;
			this->user_input_postalcode->Name = L"user_input_postalcode";
			this->user_input_postalcode->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->user_input_postalcode->Size = System::Drawing::Size(167, 42);
			this->user_input_postalcode->TabIndex = 58;
			this->user_input_postalcode->Text = L"";
			// 
			// postalcode_bar
			// 
			this->postalcode_bar->BackColor = System::Drawing::Color::RoyalBlue;
			this->postalcode_bar->Cursor = System::Windows::Forms::Cursors::Default;
			this->postalcode_bar->Location = System::Drawing::Point(590, 593);
			this->postalcode_bar->Multiline = true;
			this->postalcode_bar->Name = L"postalcode_bar";
			this->postalcode_bar->ReadOnly = true;
			this->postalcode_bar->Size = System::Drawing::Size(175, 11);
			this->postalcode_bar->TabIndex = 57;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label14->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label14->Location = System::Drawing::Point(590, 515);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 36);
			this->label14->TabIndex = 56;
			this->label14->Text = L"کد پستی";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->user_input_postalcode);
			this->Controls->Add(this->postalcode_bar);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->user_input_address);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel_gender);
			this->Controls->Add(this->user_input_password2);
			this->Controls->Add(this->user_input_password);
			this->Controls->Add(this->user_input_email);
			this->Controls->Add(this->user_input_lname);
			this->Controls->Add(this->user_input_fname);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->user_input_birth_year);
			this->Controls->Add(this->user_input_birth_month);
			this->Controls->Add(this->user_input_birth_day);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->email_bar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->fname_bar);
			this->Controls->Add(this->lname_bar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pass2_bar);
			this->Controls->Add(this->pass1_bar);
			this->Controls->Add(this->signup_bttn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"signup";
			this->Size = System::Drawing::Size(1048, 818);
			this->Load += gcnew System::EventHandler(this, &signup::MyUserControl_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel_gender->ResumeLayout(false);
			this->panel_gender->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void system_to_wstring(String^ s, wstring& os) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
#pragma endregion
	private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void signup_bttn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fname, ^ lname, ^ email, ^ password, ^ password2, ^ gender,^address,^postcode; //dont forget birth date !!!
	fname = user_input_fname->Text;
	lname = user_input_lname->Text;
	email = user_input_email->Text;
	password = user_input_password->Text;
	password2 = user_input_password2->Text;
	postcode = user_input_postalcode->Text;
	address = user_input_address->Text;

	if (user_input_male->Checked)
	{
		gender = "male";
	}
	else if (user_input_female->Checked)
	{
		gender = "female";

	}
	else
	{
		MessageBox::Show(L"لطفا جنسیت خود را مشخص کنید", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	wstring fname_wstr, lname_wstr, email_wstr, password_wstr, password2_wstr, gender_wstr, address_wstr,  postcode_wstr;
	system_to_wstring(fname,fname_wstr);
	system_to_wstring(lname,lname_wstr);
	system_to_wstring(email,email_wstr);
	system_to_wstring(password,password_wstr);
	system_to_wstring(password2,password2_wstr);
	system_to_wstring(postcode, postcode_wstr);

	String^ a, ^ b, ^ c, ^ d,^f,^g;
	a = validation::check_fa_name(fname_wstr);
	b = validation::check_fa_name(lname_wstr);
	c = validation::check_email(email_wstr);
	d = validation::check_password(password_wstr);
	f = validation::check_password_identical(password2_wstr,password_wstr);
	g = validation::check_postalcode(postcode_wstr);
	auto myregex = gcnew Regex("[\u0600-\u06FF\u0698\u067E\u0686\u06AF]+$");
	if (myregex->IsMatch(fname))
	{
		a="ok";
	}
	else
	{
		a=L"نام وارد شده معتبر نیست";
	}
	if (a != "ok")
	{
		MessageBox::Show(a, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		fname_bar->BackColor = Color::Red;
		email_bar->BackColor = Color::RoyalBlue;
		pass1_bar->BackColor = Color::RoyalBlue;
		pass2_bar->BackColor = Color::RoyalBlue;
		lname_bar->BackColor = Color::RoyalBlue;
		postalcode_bar->BackColor = Color::RoyalBlue;

	}
	else if (b != "ok")
	{
		MessageBox::Show(b, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		lname_bar->BackColor = Color::Red;
		fname_bar->BackColor = Color::RoyalBlue;
		email_bar->BackColor = Color::RoyalBlue;
		pass1_bar->BackColor = Color::RoyalBlue;
		pass2_bar->BackColor = Color::RoyalBlue;
		postalcode_bar->BackColor = Color::RoyalBlue;

	}
	else if (c != "ok")
	{
		MessageBox::Show(c, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		email_bar->BackColor = Color::Red;
		fname_bar->BackColor = Color::RoyalBlue;
		pass1_bar->BackColor = Color::RoyalBlue;
		pass2_bar->BackColor = Color::RoyalBlue;
		lname_bar->BackColor = Color::RoyalBlue;

	}
	else if (d != "ok")
	{
		MessageBox::Show(d, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		pass1_bar->BackColor = Color::Red;
		fname_bar->BackColor = Color::RoyalBlue;
		email_bar->BackColor = Color::RoyalBlue;
		pass2_bar->BackColor = Color::RoyalBlue;
		lname_bar->BackColor = Color::RoyalBlue;
		postalcode_bar->BackColor = Color::RoyalBlue;

	}
	else if (f != "ok")
	{
		MessageBox::Show(f, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		pass2_bar->BackColor = Color::Red;
		fname_bar->BackColor = Color::RoyalBlue;
		email_bar->BackColor = Color::RoyalBlue;
		pass1_bar->BackColor = Color::RoyalBlue;
		lname_bar->BackColor = Color::RoyalBlue;
		postalcode_bar->BackColor = Color::RoyalBlue;

	}
	else if (g != "ok")
	{
		MessageBox::Show(g, "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		postalcode_bar->BackColor = Color::Red;
		pass2_bar->BackColor = Color::RoyalBlue;
		fname_bar->BackColor = Color::RoyalBlue;
		email_bar->BackColor = Color::RoyalBlue;
		pass1_bar->BackColor = Color::RoyalBlue;
		lname_bar->BackColor = Color::RoyalBlue;

	}

	else
	{
		MessageBox::Show("registered", "ok", MessageBoxButtons::OK);
		postalcode_bar->BackColor = Color::RoyalBlue;
		pass2_bar->BackColor = Color::RoyalBlue;
		fname_bar->BackColor = Color::RoyalBlue;
		email_bar->BackColor = Color::RoyalBlue;
		pass1_bar->BackColor = Color::RoyalBlue;
		lname_bar->BackColor = Color::RoyalBlue;
		signed_in = true;

	}


}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
