#pragma once
#include "signin.h"
#include "signup.h"
#include "signin-signup.h"
#include "bookmadule.h"
#include "BookDetail.h"
#include <vector>
#include <string>
#include <tuple>
namespace bookstore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::vector;
	using std::string;
	using std::tuple;
	using std::make_tuple;
	using std::get;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			set_book_test();
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ exitbtn;
	private: System::Windows::Forms::PictureBox^ maxbtn;
	private: System::Windows::Forms::PictureBox^ minbtn;
	private: System::Windows::Forms::Panel^ header;

	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private: System::Windows::Forms::Panel^ panel22;




	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ panel10;



	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::FlowLayoutPanel^ main_page_panel;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Label^ label11;
























	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->maxbtn = (gcnew System::Windows::Forms::PictureBox());
			this->minbtn = (gcnew System::Windows::Forms::PictureBox());
			this->exitbtn = (gcnew System::Windows::Forms::PictureBox());
			this->header = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->main_page_panel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxbtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minbtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exitbtn))->BeginInit();
			this->header->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel22->SuspendLayout();
			this->main_page_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->maxbtn);
			this->panel1->Controls->Add(this->minbtn);
			this->panel1->Controls->Add(this->exitbtn);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// maxbtn
			// 
			this->maxbtn->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->maxbtn, L"maxbtn");
			this->maxbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->maxbtn->Name = L"maxbtn";
			this->maxbtn->TabStop = false;
			this->maxbtn->Click += gcnew System::EventHandler(this, &MyForm::maxbtn_Click);
			// 
			// minbtn
			// 
			this->minbtn->BackColor = System::Drawing::Color::Transparent;
			this->minbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->minbtn, L"minbtn");
			this->minbtn->Name = L"minbtn";
			this->minbtn->TabStop = false;
			this->minbtn->Click += gcnew System::EventHandler(this, &MyForm::minbtn_Click);
			// 
			// exitbtn
			// 
			this->exitbtn->BackColor = System::Drawing::Color::Transparent;
			this->exitbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->exitbtn, L"exitbtn");
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->TabStop = false;
			this->exitbtn->Click += gcnew System::EventHandler(this, &MyForm::exitbtn_Click);
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::MidnightBlue;
			this->header->Controls->Add(this->label11);
			this->header->Controls->Add(this->flowLayoutPanel1);
			this->header->Controls->Add(this->panel31);
			this->header->Controls->Add(this->panel24);
			this->header->Controls->Add(this->pictureBox1);
			resources->ApplyResources(this->header, L"header");
			this->header->Name = L"header";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->ForeColor = System::Drawing::Color::Orange;
			this->label11->Name = L"label11";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel32);
			this->flowLayoutPanel1->Controls->Add(this->panel25);
			this->flowLayoutPanel1->Controls->Add(this->panel19);
			this->flowLayoutPanel1->Controls->Add(this->panel23);
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			resources->ApplyResources(this->flowLayoutPanel1, L"flowLayoutPanel1");
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::AliceBlue;
			this->panel32->Controls->Add(this->pictureBox3);
			this->panel32->Controls->Add(this->label2);
			this->panel32->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel32, L"panel32");
			this->panel32->Name = L"panel32";
			this->panel32->Click += gcnew System::EventHandler(this, &MyForm::panel32_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::AliceBlue;
			this->panel25->Controls->Add(this->pictureBox11);
			this->panel25->Controls->Add(this->label10);
			this->panel25->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel25, L"panel25");
			this->panel25->Name = L"panel25";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::AliceBlue;
			this->panel19->Controls->Add(this->pictureBox8);
			this->panel19->Controls->Add(this->label7);
			this->panel19->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel19, L"panel19");
			this->panel19->Name = L"panel19";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::AliceBlue;
			this->panel23->Controls->Add(this->pictureBox9);
			this->panel23->Controls->Add(this->label8);
			this->panel23->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel23, L"panel23");
			this->panel23->Name = L"panel23";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::AliceBlue;
			this->panel13->Controls->Add(this->pictureBox5);
			this->panel13->Controls->Add(this->label4);
			this->panel13->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel13, L"panel13");
			this->panel13->Name = L"panel13";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::AliceBlue;
			this->panel18->Controls->Add(this->pictureBox7);
			this->panel18->Controls->Add(this->label6);
			this->panel18->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel18, L"panel18");
			this->panel18->Name = L"panel18";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::AliceBlue;
			this->panel12->Controls->Add(this->pictureBox4);
			this->panel12->Controls->Add(this->label3);
			this->panel12->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel12, L"panel12");
			this->panel12->Name = L"panel12";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::AliceBlue;
			this->panel31->Controls->Add(this->pictureBox2);
			this->panel31->Controls->Add(this->label1);
			this->panel31->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel31, L"panel31");
			this->panel31->Name = L"panel31";
			this->panel31->Click += gcnew System::EventHandler(this, &MyForm::panel31_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::AliceBlue;
			this->panel24->Controls->Add(this->pictureBox10);
			this->panel24->Controls->Add(this->label9);
			this->panel24->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel24, L"panel24");
			this->panel24->Name = L"panel24";
			this->panel24->Click += gcnew System::EventHandler(this, &MyForm::panel24_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// panel22
			// 
			resources->ApplyResources(this->panel22, L"panel22");
			this->panel22->BackColor = System::Drawing::Color::White;
			this->panel22->Controls->Add(this->main_page_panel);
			this->panel22->Controls->Add(this->pictureBox12);
			this->panel22->Name = L"panel22";
			// 
			// main_page_panel
			// 
			this->main_page_panel->Controls->Add(this->panel2);
			this->main_page_panel->Controls->Add(this->panel4);
			this->main_page_panel->Controls->Add(this->panel10);
			this->main_page_panel->Controls->Add(this->panel3);
			this->main_page_panel->Controls->Add(this->panel9);
			this->main_page_panel->Controls->Add(this->panel11);
			this->main_page_panel->Controls->Add(this->panel30);
			this->main_page_panel->Controls->Add(this->panel29);
			this->main_page_panel->Controls->Add(this->panel8);
			this->main_page_panel->Controls->Add(this->panel27);
			this->main_page_panel->Controls->Add(this->panel7);
			this->main_page_panel->Controls->Add(this->panel21);
			this->main_page_panel->Controls->Add(this->panel6);
			this->main_page_panel->Controls->Add(this->panel17);
			this->main_page_panel->Controls->Add(this->panel5);
			this->main_page_panel->Controls->Add(this->panel16);
			this->main_page_panel->Controls->Add(this->panel28);
			this->main_page_panel->Controls->Add(this->panel26);
			this->main_page_panel->Controls->Add(this->panel20);
			this->main_page_panel->Controls->Add(this->panel15);
			resources->ApplyResources(this->main_page_panel, L"main_page_panel");
			this->main_page_panel->Name = L"main_page_panel";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			this->panel2->Click += gcnew System::EventHandler(this, &MyForm::panel2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::Window;
			this->panel10->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel10, L"panel10");
			this->panel10->Name = L"panel10";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Window;
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::Window;
			this->panel9->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel9, L"panel9");
			this->panel9->Name = L"panel9";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::Window;
			this->panel11->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel11, L"panel11");
			this->panel11->Name = L"panel11";
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::SystemColors::Window;
			this->panel30->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel30, L"panel30");
			this->panel30->Name = L"panel30";
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::SystemColors::Window;
			this->panel29->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel29, L"panel29");
			this->panel29->Name = L"panel29";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::Window;
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel8, L"panel8");
			this->panel8->Name = L"panel8";
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::SystemColors::Window;
			this->panel27->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel27, L"panel27");
			this->panel27->Name = L"panel27";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Window;
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel7, L"panel7");
			this->panel7->Name = L"panel7";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::SystemColors::Window;
			this->panel21->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel21, L"panel21");
			this->panel21->Name = L"panel21";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Window;
			this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::SystemColors::Window;
			this->panel17->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel17, L"panel17");
			this->panel17->Name = L"panel17";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Window;
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel5, L"panel5");
			this->panel5->Name = L"panel5";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::Window;
			this->panel16->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel16, L"panel16");
			this->panel16->Name = L"panel16";
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::SystemColors::Window;
			this->panel28->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel28, L"panel28");
			this->panel28->Name = L"panel28";
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::SystemColors::Window;
			this->panel26->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel26, L"panel26");
			this->panel26->Name = L"panel26";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::Window;
			this->panel20->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel20, L"panel20");
			this->panel20->Name = L"panel20";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::Window;
			this->panel15->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel15, L"panel15");
			this->panel15->Name = L"panel15";
			// 
			// pictureBox12
			// 
			resources->ApplyResources(this->pictureBox12, L"pictureBox12");
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->TabStop = false;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->header);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxbtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minbtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exitbtn))->EndInit();
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel22->ResumeLayout(false);
			this->main_page_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);

		}
		bool drag = false;
		Point start_point;
		void set_book_test()
		{
			vector<tuple<std::wstring, std::wstring, std::wstring,string>> alpha;
			alpha.push_back(make_tuple(L"covers\\3264_68232_normal.jpg",L"پیرمرد و دریا",L"ارنست همینگوی","20,000"));
			alpha.push_back(make_tuple(L"covers\\86104_42858_normal.jpg",L"عقاید یک دلقک",L"هاینریش بل","26,000"));
			alpha.push_back(make_tuple(L"covers\\1.jpg",L"من پیش از تو",L"جوجو مویز","16,000"));
			alpha.push_back(make_tuple(L"covers\\2.jpg",L"کتاب مغازه خودکشی",L"ژان تولی","20,000"));
			alpha.push_back(make_tuple(L"covers\\3.jpg",L"جزء از کل",L"استیو تولتز","40,000"));
			alpha.push_back(make_tuple(L"covers\\4.jpg",L"مزرعه حیوانات",L"جورج اورول","17,000"));
			alpha.push_back(make_tuple(L"covers\\5.jpg",L"سمفونی مردگان",L"عباس معروفی","23,000"));
			alpha.push_back(make_tuple(L"covers\\6.jpg",L"مردی به نام اوه",L"","27,000"));
			alpha.push_back(make_tuple(L"covers\\7.jpg",L"چشم هایش",L"بزرگ علوی","30,000"));
			alpha.push_back(make_tuple(L"covers\\8.jpg",L"دور دنیا در 80 روز",L"ژول ورن","33,000"));
			alpha.push_back(make_tuple(L"covers\\9.jpg",L"قمارباز",L"فئودور داستایوفسکی","25,000"));
			alpha.push_back(make_tuple(L"covers\\10.jpg",L"استیو جابز",L"والتر ایساکسون","19,000"));
			alpha.push_back(make_tuple(L"covers\\11.jpg",L"ناتور دشت",L"جی دی سلینجر","34,000"));
			alpha.push_back(make_tuple(L"covers\\12.jpg",L"سینوهه",L"میکا والتری","67,000"));
			alpha.push_back(make_tuple(L"covers\\13.jpg",L"فانوس های لرزان",L"نسرین تبریزی","33,000"));
			alpha.push_back(make_tuple(L"covers\\14.jpg",L"جهان هولوگرافیک",L"مایکل تالبوت","54,000"));
			alpha.push_back(make_tuple(L"covers\\15.jpg",L"آدم آهنی",L"نادر ابراهیمی","43,000"));
			alpha.push_back(make_tuple(L"covers\\16.jpg",L"تکنیک های بازار یابی",L"حسین یاغچی","23,000"));
			alpha.push_back(make_tuple(L"covers\\17.jpg",L"بازار یابی و فروش نرم افزار",L"خدایار عبداللهی","17,000"));
			alpha.push_back(make_tuple(L"covers\\18.jpg",L"تحلیل تکنیکال بازار سرمایه",L"جان مورفی","27,000"));
			alpha.push_back(make_tuple(L"covers\\19.jpg",L"",L"",""));
			alpha.push_back(make_tuple(L"covers\\20.jpg",L"",L"",""));
			int a = 0;
			for each (Panel ^ ctrl in main_page_panel->Controls) {
				bookmadule^ page = gcnew bookmadule();
				for each (PictureBox ^ imagebox in page->Controls->Find("book_pic",true))
				{
					String^ Text = gcnew String(get<0>(alpha[a]).c_str());
					imagebox->ImageLocation = Text;
				}
				for each (Label ^ labeltitle in page->Controls->Find("book_title", true))
				{

					String^ Text = gcnew String(get<1>(alpha[a]).c_str());
					labeltitle->Text = Text;
					if (labeltitle->Width > 59)
					{
						labeltitle->Left -= (labeltitle->Width-59)/2;
					}
					else if (labeltitle->Width < 59)
					{
						labeltitle->Left += (59 - labeltitle->Width) / 2;

					}
					
				}
				for each (Label ^ labelauthor in page->Controls->Find("book_author", true))
				{

					String^ Text = gcnew String(get<2>(alpha[a]).c_str());
					labelauthor->Text = Text;
					if (labelauthor->Width > 47)
					{
						labelauthor->Left -= (labelauthor->Width - 47) / 2;
					}
					else if (labelauthor->Width < 47)
					{
						labelauthor->Left += (47 - labelauthor->Width) / 2;

					}




				}
				for each (Label ^ labelprice in page->Controls->Find("book_price", true))
				{

					String^ Text = gcnew String(get<3>(alpha[a]).c_str());
					labelprice->Text = Text;
					if (labelprice->Width > 71)
					{
						labelprice->Left -= (labelprice->Width - 71) / 2;
					}



				}
				ctrl->Width = page->Width;
				ctrl->Height = page->Height;
				ctrl->Controls->Add(page);
				if(a<alpha.size()-1)
				a++;
			}

		}
		BookDetail^ tt(Panel^ panel)
		{
			String^ image , ^title, ^author, ^price;
			for each (PictureBox ^ imagebox in panel->Controls->Find("book_pic", true))
			{

				image = imagebox->ImageLocation;

			}
			for each (Label ^ labeltitle in panel->Controls->Find("book_title", true))
			{
				
				title = labeltitle->Text;

			}
			for each (Label ^ labelauthor in panel->Controls->Find("book_author", true))
			{

				author = labelauthor->Text;

			}
			for each (Label ^ labelprice in panel->Controls->Find("book_price", true))
			{

				price = labelprice->Text;

			}

			BookDetail^ page = gcnew BookDetail();
			for each (PictureBox ^ bookimage in page->Controls->Find("book_image", true))
			{

				bookimage->ImageLocation = image;

			}
			for each (RichTextBox ^ booktitle in page->Controls->Find("book_title", true))
			{

				booktitle->Text = title;

			}
			for each (RichTextBox ^ bookauthor in page->Controls->Find("book_author", true))
			{

				bookauthor->Text = author;

			}

			return page;
		}
#pragma endregion
	private: System::Void exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void minbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void maxbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState != FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Maximized;
	}
	else
	{
		this->WindowState = FormWindowState::Normal;
	}

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {\

	drag = true;
	   start_point.X = e->X;
	   start_point.Y = e->Y;
}
private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (drag)
	{
		Point  p = PointToScreen(Point(e->X,e->Y));
		Point ^ final_pos = gcnew Point(p.X - start_point.X, p.Y - start_point.Y);
		Location = Point(p.X - start_point.X , p.Y - start_point.Y);

	}

}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	drag = false;
}
private: System::Void panel24_Click(System::Object^ sender, System::EventArgs^ e) {
	signinsignup^ form2 = gcnew signinsignup();
	signup^ page = gcnew signup();
	form2->Text = "sign up";
	form2->Height = 690;
	form2->Width = 820;
	form2->Controls->Add(page);
	form2->Show();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	signinsignup^ form2 = gcnew signinsignup();
	signup^ page = gcnew signup();
	form2->Text = "sign up";
	form2->Height = 690;
	form2->Width = 820;
	form2->Controls->Add(page);
	form2->Show();
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	signinsignup^ form2 = gcnew signinsignup();
	signup^ page = gcnew signup();
	form2->Text = "sign up";
	form2->Height = page->Height+47;
	form2->Width = page->Width;
	form2->Controls->Add(page);
	form2->Show();
}
private: System::Void panel31_Click(System::Object^ sender, System::EventArgs^ e) {
	signinsignup^ form2 = gcnew signinsignup();
	signin^ page = gcnew signin();
	form2->Height = 560;
	form2->Width = 725;
	form2->Text = "sign in";
	form2->Controls->Add(page);
	form2->Show();

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	signinsignup^ form2 = gcnew signinsignup();
	signin^ page = gcnew signin();
	form2->Height = 560;
	form2->Width = 725;
	form2->Text = "sign in";
	form2->Controls->Add(page);
	form2->Show();

}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	signinsignup^ form2 = gcnew signinsignup();
	signin^ page = gcnew signin();
	form2->Height = 560;
	form2->Width = 725;
	form2->Text = "sign in";
	form2->Controls->Add(page);
	form2->Show();


}
private: System::Void panel32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("jjj","k");
}
private: System::Void panel2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("ddddd", "ssss");
	tt(panel2);
}
};
}
