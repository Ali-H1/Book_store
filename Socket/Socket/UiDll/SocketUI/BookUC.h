#pragma once
#include"BookAddUC.h"
#include "BookRemoveUC.h"


namespace SocketUI {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

	delegate void methodHandler();

	/// <summary>
	/// Summary for BookUC
	/// </summary>
	public ref class BookUC : public System::Windows::Forms::UserControl
	{
	public :methodHandler ^ OnRunMethod;
	static System::String^ title, ^ author, ^ genre, ^ year, ^ edition, ^ price, ^ translator, ^ publisher, ^ language, ^ summery, ^ coverpath, ^ filepath;
	static int digital,avalable;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::ListView^ QueueList;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	public:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:

	public:
		BookUC(void)
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
		~BookUC()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:































	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;




























	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckBox^ avalable_input;

	private: System::Windows::Forms::TextBox^ price_input;

	private: System::Windows::Forms::TextBox^ publisher_input;
	private: System::Windows::Forms::TextBox^ year_input;



	private: System::Windows::Forms::TextBox^ author_input;
	private: System::Windows::Forms::TextBox^ language_input;
	private: System::Windows::Forms::TextBox^ edition_input;



	private: System::Windows::Forms::TextBox^ translator_input;
private: System::Windows::Forms::TextBox^ genre_input;
private: System::Windows::Forms::Button^ cover_button;
private: System::Windows::Forms::Button^ file_button;




private: System::Windows::Forms::CheckBox^ digital_input;
private: System::Windows::Forms::RichTextBox^ summery_input;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ title_input;

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
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Button^ delete_button;





























private: System::Windows::Forms::Button^ change_button;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ add_button;
private: System::Windows::Forms::Label^ file_input;
private: System::Windows::Forms::Label^ cover_input;

	protected:
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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->file_input = (gcnew System::Windows::Forms::Label());
			this->cover_input = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->avalable_input = (gcnew System::Windows::Forms::CheckBox());
			this->price_input = (gcnew System::Windows::Forms::TextBox());
			this->publisher_input = (gcnew System::Windows::Forms::TextBox());
			this->year_input = (gcnew System::Windows::Forms::TextBox());
			this->author_input = (gcnew System::Windows::Forms::TextBox());
			this->language_input = (gcnew System::Windows::Forms::TextBox());
			this->edition_input = (gcnew System::Windows::Forms::TextBox());
			this->translator_input = (gcnew System::Windows::Forms::TextBox());
			this->genre_input = (gcnew System::Windows::Forms::TextBox());
			this->cover_button = (gcnew System::Windows::Forms::Button());
			this->file_button = (gcnew System::Windows::Forms::Button());
			this->digital_input = (gcnew System::Windows::Forms::CheckBox());
			this->summery_input = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->title_input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->QueueList = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::SpringGreen;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton1->Location = System::Drawing::Point(402, 17);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 33);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"تغییر";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &BookUC::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::SpringGreen;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton2->Location = System::Drawing::Point(164, 17);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 33);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"حذف";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &BookUC::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::SpringGreen;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton3->Location = System::Drawing::Point(604, 17);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(105, 33);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"اضافه کردن";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &BookUC::radioButton3_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->QueueList);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(867, 998);
			this->panel1->TabIndex = 0;
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
			this->dataGridView1->Location = System::Drawing::Point(7, 562);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(809, 172);
			this->dataGridView1->TabIndex = 6;
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
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(4, 741);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(845, 386);
			this->panel5->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->delete_button);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->change_button);
			this->panel3->Controls->Add(this->add_button);
			this->panel3->Controls->Add(this->file_input);
			this->panel3->Controls->Add(this->cover_input);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->avalable_input);
			this->panel3->Controls->Add(this->price_input);
			this->panel3->Controls->Add(this->publisher_input);
			this->panel3->Controls->Add(this->year_input);
			this->panel3->Controls->Add(this->author_input);
			this->panel3->Controls->Add(this->language_input);
			this->panel3->Controls->Add(this->edition_input);
			this->panel3->Controls->Add(this->translator_input);
			this->panel3->Controls->Add(this->genre_input);
			this->panel3->Controls->Add(this->cover_button);
			this->panel3->Controls->Add(this->file_button);
			this->panel3->Controls->Add(this->digital_input);
			this->panel3->Controls->Add(this->summery_input);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->title_input);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(4, 58);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(845, 497);
			this->panel3->TabIndex = 2;
			// 
			// delete_button
			// 
			this->delete_button->BackColor = System::Drawing::Color::Tomato;
			this->delete_button->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->delete_button->Location = System::Drawing::Point(16, 415);
			this->delete_button->Margin = System::Windows::Forms::Padding(4);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(89, 40);
			this->delete_button->TabIndex = 104;
			this->delete_button->Text = L"حذف";
			this->delete_button->UseVisualStyleBackColor = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Orange;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3.8F, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::DarkOrange;
			this->label23->Location = System::Drawing::Point(26, 478);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(774, 7);
			this->label23->TabIndex = 106;
			this->label23->Text = L"_________________________________________________________________________________"
				L"_________________________________________________________________________\r\n";
			// 
			// change_button
			// 
			this->change_button->BackColor = System::Drawing::Color::Lime;
			this->change_button->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->change_button->Location = System::Drawing::Point(218, 415);
			this->change_button->Margin = System::Windows::Forms::Padding(4);
			this->change_button->Name = L"change_button";
			this->change_button->Size = System::Drawing::Size(89, 40);
			this->change_button->TabIndex = 103;
			this->change_button->Text = L"تغییر";
			this->change_button->UseVisualStyleBackColor = false;
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::Color::LimeGreen;
			this->add_button->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->add_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
			this->add_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_button->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->add_button->ForeColor = System::Drawing::Color::Indigo;
			this->add_button->Location = System::Drawing::Point(113, 415);
			this->add_button->Margin = System::Windows::Forms::Padding(4);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(100, 40);
			this->add_button->TabIndex = 105;
			this->add_button->Text = L"اضافه کردن";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &BookUC::add_button_Click);
			// 
			// file_input
			// 
			this->file_input->AutoSize = true;
			this->file_input->Location = System::Drawing::Point(33, 378);
			this->file_input->Name = L"file_input";
			this->file_input->Size = System::Drawing::Size(44, 17);
			this->file_input->TabIndex = 104;
			this->file_input->Text = L"NULL";
			// 
			// cover_input
			// 
			this->cover_input->AutoSize = true;
			this->cover_input->Location = System::Drawing::Point(33, 357);
			this->cover_input->Name = L"cover_input";
			this->cover_input->Size = System::Drawing::Size(44, 17);
			this->cover_input->TabIndex = 103;
			this->cover_input->Text = L"NULL";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Location = System::Drawing::Point(653, 368);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(152, 82);
			this->panel2->TabIndex = 102;
			this->panel2->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::SpringGreen;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(72, 37);
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
			this->label12->Location = System::Drawing::Point(101, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 29);
			this->label12->TabIndex = 59;
			this->label12->Text = L"حجم";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// avalable_input
			// 
			this->avalable_input->AutoSize = true;
			this->avalable_input->BackColor = System::Drawing::Color::SpringGreen;
			this->avalable_input->Checked = true;
			this->avalable_input->CheckState = System::Windows::Forms::CheckState::Checked;
			this->avalable_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->avalable_input->Location = System::Drawing::Point(725, 263);
			this->avalable_input->Margin = System::Windows::Forms::Padding(4);
			this->avalable_input->Name = L"avalable_input";
			this->avalable_input->Size = System::Drawing::Size(75, 33);
			this->avalable_input->TabIndex = 101;
			this->avalable_input->Text = L"موجود";
			this->avalable_input->UseVisualStyleBackColor = false;
			// 
			// price_input
			// 
			this->price_input->BackColor = System::Drawing::Color::SpringGreen;
			this->price_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->price_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->price_input->Location = System::Drawing::Point(335, 192);
			this->price_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->price_input->Name = L"price_input";
			this->price_input->Size = System::Drawing::Size(137, 33);
			this->price_input->TabIndex = 100;
			// 
			// publisher_input
			// 
			this->publisher_input->BackColor = System::Drawing::Color::SpringGreen;
			this->publisher_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->publisher_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->publisher_input->Location = System::Drawing::Point(668, 123);
			this->publisher_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->publisher_input->Name = L"publisher_input";
			this->publisher_input->Size = System::Drawing::Size(137, 33);
			this->publisher_input->TabIndex = 99;
			// 
			// year_input
			// 
			this->year_input->BackColor = System::Drawing::Color::SpringGreen;
			this->year_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->year_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->year_input->Location = System::Drawing::Point(668, 192);
			this->year_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->year_input->Name = L"year_input";
			this->year_input->Size = System::Drawing::Size(137, 33);
			this->year_input->TabIndex = 98;
			// 
			// author_input
			// 
			this->author_input->BackColor = System::Drawing::Color::SpringGreen;
			this->author_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->author_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->author_input->Location = System::Drawing::Point(499, 54);
			this->author_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->author_input->Name = L"author_input";
			this->author_input->Size = System::Drawing::Size(137, 33);
			this->author_input->TabIndex = 97;
			// 
			// language_input
			// 
			this->language_input->BackColor = System::Drawing::Color::SpringGreen;
			this->language_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->language_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->language_input->Location = System::Drawing::Point(499, 123);
			this->language_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->language_input->Name = L"language_input";
			this->language_input->Size = System::Drawing::Size(137, 33);
			this->language_input->TabIndex = 96;
			// 
			// edition_input
			// 
			this->edition_input->BackColor = System::Drawing::Color::SpringGreen;
			this->edition_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->edition_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->edition_input->Location = System::Drawing::Point(499, 193);
			this->edition_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edition_input->Name = L"edition_input";
			this->edition_input->Size = System::Drawing::Size(137, 33);
			this->edition_input->TabIndex = 95;
			// 
			// translator_input
			// 
			this->translator_input->BackColor = System::Drawing::Color::SpringGreen;
			this->translator_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->translator_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->translator_input->Location = System::Drawing::Point(335, 54);
			this->translator_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->translator_input->Name = L"translator_input";
			this->translator_input->Size = System::Drawing::Size(137, 33);
			this->translator_input->TabIndex = 94;
			// 
			// genre_input
			// 
			this->genre_input->BackColor = System::Drawing::Color::SpringGreen;
			this->genre_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->genre_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->genre_input->Location = System::Drawing::Point(335, 123);
			this->genre_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->genre_input->Name = L"genre_input";
			this->genre_input->Size = System::Drawing::Size(137, 33);
			this->genre_input->TabIndex = 93;
			// 
			// cover_button
			// 
			this->cover_button->BackColor = System::Drawing::Color::SpringGreen;
			this->cover_button->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->cover_button->Location = System::Drawing::Point(51, 257);
			this->cover_button->Margin = System::Windows::Forms::Padding(4);
			this->cover_button->Name = L"cover_button";
			this->cover_button->Size = System::Drawing::Size(100, 38);
			this->cover_button->TabIndex = 92;
			this->cover_button->Text = L"اپلود عکس";
			this->cover_button->UseVisualStyleBackColor = false;
			this->cover_button->Click += gcnew System::EventHandler(this, &BookUC::cover_button_Click);
			// 
			// file_button
			// 
			this->file_button->BackColor = System::Drawing::Color::SpringGreen;
			this->file_button->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->file_button->Location = System::Drawing::Point(51, 304);
			this->file_button->Margin = System::Windows::Forms::Padding(4);
			this->file_button->Name = L"file_button";
			this->file_button->Size = System::Drawing::Size(100, 38);
			this->file_button->TabIndex = 91;
			this->file_button->Text = L"اپلود فایل ";
			this->file_button->UseVisualStyleBackColor = false;
			this->file_button->Click += gcnew System::EventHandler(this, &BookUC::file_button_Click);
			// 
			// digital_input
			// 
			this->digital_input->AutoSize = true;
			this->digital_input->BackColor = System::Drawing::Color::SpringGreen;
			this->digital_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->digital_input->Location = System::Drawing::Point(719, 304);
			this->digital_input->Margin = System::Windows::Forms::Padding(4);
			this->digital_input->Name = L"digital_input";
			this->digital_input->Size = System::Drawing::Size(86, 33);
			this->digital_input->TabIndex = 90;
			this->digital_input->Text = L"دیجیتال";
			this->digital_input->UseVisualStyleBackColor = false;
			// 
			// summery_input
			// 
			this->summery_input->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->summery_input->Location = System::Drawing::Point(335, 263);
			this->summery_input->Margin = System::Windows::Forms::Padding(4);
			this->summery_input->Name = L"summery_input";
			this->summery_input->Size = System::Drawing::Size(300, 153);
			this->summery_input->TabIndex = 89;
			this->summery_input->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->pictureBox1->Location = System::Drawing::Point(36, 54);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
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
			this->label5->Location = System::Drawing::Point(456, 421);
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
			this->label7->Location = System::Drawing::Point(595, 91);
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
			this->label8->Location = System::Drawing::Point(764, 91);
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
			this->label9->Location = System::Drawing::Point(437, 91);
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
			this->label10->Location = System::Drawing::Point(421, 160);
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
			this->label6->Location = System::Drawing::Point(531, 160);
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
			this->label1->Location = System::Drawing::Point(723, 160);
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
			this->label2->Location = System::Drawing::Point(393, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 29);
			this->label2->TabIndex = 80;
			this->label2->Text = L"نام مترجم";
			// 
			// title_input
			// 
			this->title_input->BackColor = System::Drawing::Color::SpringGreen;
			this->title_input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->title_input->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F));
			this->title_input->Location = System::Drawing::Point(668, 54);
			this->title_input->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->title_input->Name = L"title_input";
			this->title_input->Size = System::Drawing::Size(137, 33);
			this->title_input->TabIndex = 79;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(547, 22);
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
			this->label4->Location = System::Drawing::Point(729, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 29);
			this->label4->TabIndex = 77;
			this->label4->Text = L"نام کتاب ";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"jpg|*.jpg|png|*png";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog1";
			this->openFileDialog2->Filter = L"pdf|*.pdf";
			// 
			// QueueList
			// 
			this->QueueList->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->QueueList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(11) {
				this->ID, this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader8, this->columnHeader9, this->columnHeader10
			});
			this->QueueList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueueList->ForeColor = System::Drawing::Color::Black;
			this->QueueList->HideSelection = false;
			this->QueueList->Location = System::Drawing::Point(40, 610);
			this->QueueList->Name = L"QueueList";
			this->QueueList->Size = System::Drawing::Size(747, 234);
			this->QueueList->TabIndex = 43;
			this->QueueList->UseCompatibleStateImageBehavior = false;
			this->QueueList->View = System::Windows::Forms::View::Details;
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			this->ID->Width = 65;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Title";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Author";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Genre";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Publish Year";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Edition";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Translator";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Price";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Publisher";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Language";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Avalable";
			// 
			// BookUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"BookUC";
			this->Size = System::Drawing::Size(867, 998);
			this->Load += gcnew System::EventHandler(this, &BookUC::BookUC_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->Enabled = true;
	add_button->Enabled = false;
	change_button->Enabled = true;
	delete_button->Enabled = false;

}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->Enabled = true;
	add_button->Enabled = false;
	change_button->Enabled = false;
	delete_button->Enabled = true;

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->Enabled = false;
	add_button->Enabled = true;
	change_button->Enabled = false;
	delete_button->Enabled = false;
}
private: System::Void BookUC_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (title_input->Text != L"" && author_input->Text != L"" && genre_input->Text != L"" && year_input->Text != L"" && edition_input->Text != L"" && price_input->Text != L"" && publisher_input->Text != L"" && language_input->Text != L"" && summery_input->Text != L"")
	{
		title = title_input->Text;
		author = author_input->Text;
		genre = genre_input->Text;
		year = year_input->Text;
		edition = edition_input->Text;
		price = price_input->Text;
		publisher = publisher_input->Text;
		language = language_input->Text;
		summery = summery_input->Text;
		translator = translator_input->Text;
		coverpath= cover_input->Text ;
		filepath=file_input->Text ;

		avalable = avalable_input->Checked;
		digital = digital_input->Checked;

	if (OnRunMethod != nullptr)
		OnRunMethod();

	}
}
private: System::Void cover_button_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		cover_input->Text = openFileDialog1->FileName;
	}


}
private: System::Void file_button_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog2->ShowDialog();
	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		file_input->Text = openFileDialog2->FileName;
	}

}
};
}
