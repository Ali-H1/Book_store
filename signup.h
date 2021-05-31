#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

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
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ birthdate_day;
	private: System::Windows::Forms::ComboBox^ birthdate_month;
	private: System::Windows::Forms::ComboBox^ birthdate_year;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;






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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->birthdate_day = (gcnew System::Windows::Forms::ComboBox());
			this->birthdate_month = (gcnew System::Windows::Forms::ComboBox());
			this->birthdate_year = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(496, 820);
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
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Location = System::Drawing::Point(593, 496);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(370, 10);
			this->textBox4->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Location = System::Drawing::Point(591, 383);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(372, 10);
			this->textBox3->TabIndex = 27;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(593, 350);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '.';
			this->textBox2->Size = System::Drawing::Size(370, 30);
			this->textBox2->TabIndex = 26;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &signup::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(596, 463);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '.';
			this->textBox1->Size = System::Drawing::Size(367, 30);
			this->textBox1->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(731, 735);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 37);
			this->button1->TabIndex = 24;
			this->button1->Text = L"ثبت نام";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(591, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 29);
			this->label1->TabIndex = 23;
			this->label1->Text = L"گذرواژه";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(589, 432);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"تکرار گذرواژه";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox5->Location = System::Drawing::Point(575, 154);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(184, 10);
			this->textBox5->TabIndex = 34;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox6->Location = System::Drawing::Point(811, 153);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(179, 10);
			this->textBox6->TabIndex = 33;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox7->Location = System::Drawing::Point(813, 119);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(177, 30);
			this->textBox7->TabIndex = 32;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox8->Location = System::Drawing::Point(577, 123);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(182, 30);
			this->textBox8->TabIndex = 31;
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
			this->label6->Location = System::Drawing::Point(572, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 29);
			this->label6->TabIndex = 29;
			this->label6->Text = L"نام ";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::RoyalBlue;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox9->Location = System::Drawing::Point(594, 265);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(365, 10);
			this->textBox9->TabIndex = 37;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(596, 235);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(363, 23);
			this->textBox10->TabIndex = 36;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(591, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 29);
			this->label7->TabIndex = 35;
			this->label7->Text = L"ایمیل";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Location = System::Drawing::Point(725, 639);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(120, 70);
			this->panel2->TabIndex = 39;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton1->Location = System::Drawing::Point(7, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(50, 30);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"مرد";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton2->Location = System::Drawing::Point(68, 37);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(47, 30);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"زن";
			this->radioButton2->UseVisualStyleBackColor = true;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label10->Location = System::Drawing::Point(586, 538);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 29);
			this->label10->TabIndex = 41;
			this->label10->Text = L"تاریخ تولد";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// birthdate_day
			// 
			this->birthdate_day->FormattingEnabled = true;
			this->birthdate_day->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"---", L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->birthdate_day->Location = System::Drawing::Point(883, 586);
			this->birthdate_day->Name = L"birthdate_day";
			this->birthdate_day->Size = System::Drawing::Size(94, 24);
			this->birthdate_day->TabIndex = 42;
			// 
			// birthdate_month
			// 
			this->birthdate_month->FormattingEnabled = true;
			this->birthdate_month->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"---", L"فروردين", L"ارديبهشت", L"خرداد",
					L"تير", L"مرداد", L"شهريور", L"مهر", L"آبان", L"آذر", L"دى", L"بهمن", L"اسفند"
			});
			this->birthdate_month->Location = System::Drawing::Point(745, 586);
			this->birthdate_month->Name = L"birthdate_month";
			this->birthdate_month->Size = System::Drawing::Size(105, 24);
			this->birthdate_month->TabIndex = 43;
			// 
			// birthdate_year
			// 
			this->birthdate_year->FormattingEnabled = true;
			this->birthdate_year->Items->AddRange(gcnew cli::array< System::Object^  >(102) {
				L"---", L"1400", L"1399", L"1398", L"1397",
					L"1396", L"1395", L"1394", L"1393", L"1392", L"1391", L"1390", L"1389", L"1388", L"1387", L"1386", L"1385", L"1384", L"1383",
					L"1382", L"1381", L"1380", L"1379", L"1378", L"1377", L"1376", L"1375", L"1374", L"1373", L"1372", L"1371", L"1370", L"1369",
					L"1368", L"1367", L"1366", L"1365", L"1364", L"1363", L"1362", L"1361", L"1360", L"1359", L"1358", L"1357", L"1356", L"1355",
					L"1354", L"1353", L"1352", L"1351", L"1350", L"1349", L"1348", L"1347", L"1346", L"1345", L"1344", L"1343", L"1342", L"1341",
					L"1340", L"1339", L"1338", L"1337", L"1336", L"1335", L"1334", L"1333", L"1332", L"1331", L"1330", L"1329", L"1328", L"1327",
					L"1326", L"1325", L"1324", L"1323", L"1322", L"1321", L"1320", L"1319", L"1318", L"1317", L"1316", L"1315", L"1314", L"1313",
					L"1312", L"1311", L"1310", L"1309", L"1308", L"1307", L"1306", L"1305", L"1304", L"1303", L"1302", L"1301", L"1300"
			});
			this->birthdate_year->Location = System::Drawing::Point(613, 587);
			this->birthdate_year->Name = L"birthdate_year";
			this->birthdate_year->Size = System::Drawing::Size(97, 24);
			this->birthdate_year->TabIndex = 44;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(590, 590);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 17);
			this->label11->TabIndex = 45;
			this->label11->Text = L"y:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(860, 589);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 17);
			this->label12->TabIndex = 46;
			this->label12->Text = L"d:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(720, 589);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 17);
			this->label13->TabIndex = 47;
			this->label13->Text = L"m:";
			// 
			// signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->birthdate_year);
			this->Controls->Add(this->birthdate_month);
			this->Controls->Add(this->birthdate_day);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"signup";
			this->Size = System::Drawing::Size(1070, 820);
			this->Load += gcnew System::EventHandler(this, &signup::MyUserControl_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
