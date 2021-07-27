#pragma once
#include "signin.h"
#include "signup.h"
#include "signin-signup.h"
#include "bookmadule.h"
#include "BookDetail.h"
#include "Category_Pagel.h"
#include "Author_Page.h"
#include "Virtual_Payment_System.h"
#include <vector>
#include <string>
#include <tuple>
#define booklist vector<tuple<std::wstring, std::wstring, std::wstring, wstring, wstring, wstring, wstring, wstring>>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Runtime::InteropServices;
using std::vector;
using std::string;
using std::tuple;
using std::make_tuple;
using std::get;
using std::to_string;

vector<tuple<std::wstring, std::wstring, std::wstring, wstring, wstring, wstring, wstring, wstring>> alpha;

		vector <wstring> Genres;
		vector <wstring> Authors;

namespace bookstore {



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	delegate void DelADDCLIENT(String^, bool);
	delegate void DelADDQUEUE(array< String^>^);
	delegate void DelProgressBar(int, int);
	delegate void DelCompelete(int);
	delegate void Delrequest();

	[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
	delegate void UIChangeProgress(int queueid, int value);
	[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
	delegate void UINewClient(std::string, bool flag);
	[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
	delegate void UINewRecieve(int Queueid, std::string Name, std::string Extention);


	[DllImport("ClientDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void  Startup(std::string, int, UIChangeProgress^, UINewClient^, UINewRecieve^);

	[DllImport("ClientDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	int SendFile(std::string path, std::string username);

	[DllImport("ClientDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	int StartDownload(int queueid);

	[DllImport("ClientDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void thread_wait();

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		DelADDCLIENT^ Event_ADDCLIENT;
		DelADDQUEUE^ Event_ADDQUEUE;
		DelProgressBar^ Event_Progress;
		UIChangeProgress^ Event_UIChangeProgress;
		UINewClient^ Event_UINewClient;
		UINewRecieve^ Event_UINewRecieve;
		DelCompelete^ Event_Compelete;
		Delrequest^ Event_request;
		Thread^ thread = gcnew Thread(gcnew ThreadStart(this, &MyForm::StartServer));

		MyForm(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			set_book_test(set_book());
			//set_data();
			Genres.push_back(L"روانشناسی");
			Genres.push_back(L"فیزیک");
			Genres.push_back(L"رمان");
			Genres.push_back(L"کامپیوتر");
			Genres.push_back(L"ادبیات");
			Genres.push_back(L"فلسفه");
			Genres.push_back(L"زبان خارجی");
			Genres.push_back(L"کتاب دیجیتال");
			Authors.push_back(L"جرج اورول");
			Authors.push_back(L"ویکتور هوگو");
			Authors.push_back(L"رضا امیرخانی");
			Authors.push_back(L"ارنست همینگوی");
			Authors.push_back(L"جان اشتاین بک");
			Authors.push_back(L"شکسپیر");
			Authors.push_back(L"ابر کامو");
			Authors.push_back(L"استیو تولتز");


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
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::PictureBox^ exitbtn;
	private: System::Windows::Forms::PictureBox^ maxbtn;
	private: System::Windows::Forms::PictureBox^ minbtn;
	private: System::Windows::Forms::Panel^ header;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public: System::Windows::Forms::Panel^ main_page_panel;

	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ panel10;


	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ category_panel;
	private: System::Windows::Forms::PictureBox^ category_icon;


	private: System::Windows::Forms::Label^ category_label;


	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Panel^ signup_panel;
	private:

	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Panel^ Shoping_cart_panel;
	private:

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
public: System::Windows::Forms::Panel^ signin_panel;
private:

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Home_panel;
	private: System::Windows::Forms::PictureBox^ Home_icon;


	private: System::Windows::Forms::Label^ Home_lable;

	public: System::Windows::Forms::FlowLayoutPanel^ recent_books;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label11;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->Home_panel = (gcnew System::Windows::Forms::Panel());
			this->Home_icon = (gcnew System::Windows::Forms::PictureBox());
			this->Home_lable = (gcnew System::Windows::Forms::Label());
			this->Shoping_cart_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->category_panel = (gcnew System::Windows::Forms::Panel());
			this->category_icon = (gcnew System::Windows::Forms::PictureBox());
			this->category_label = (gcnew System::Windows::Forms::Label());
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
			this->signin_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->signup_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->main_page_panel = (gcnew System::Windows::Forms::Panel());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->recent_books = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
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
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxbtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minbtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exitbtn))->BeginInit();
			this->header->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->Home_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Home_icon))->BeginInit();
			this->Shoping_cart_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->category_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->category_icon))->BeginInit();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->signin_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->signup_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->main_page_panel->SuspendLayout();
			this->recent_books->SuspendLayout();
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
			resources->ApplyResources(this->maxbtn, L"maxbtn");
			this->maxbtn->BackColor = System::Drawing::Color::Transparent;
			this->maxbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->maxbtn->Name = L"maxbtn";
			this->maxbtn->TabStop = false;
			this->maxbtn->Click += gcnew System::EventHandler(this, &MyForm::maxbtn_Click);
			// 
			// minbtn
			// 
			resources->ApplyResources(this->minbtn, L"minbtn");
			this->minbtn->BackColor = System::Drawing::Color::Transparent;
			this->minbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minbtn->Name = L"minbtn";
			this->minbtn->TabStop = false;
			this->minbtn->Click += gcnew System::EventHandler(this, &MyForm::minbtn_Click);
			// 
			// exitbtn
			// 
			resources->ApplyResources(this->exitbtn, L"exitbtn");
			this->exitbtn->BackColor = System::Drawing::Color::Transparent;
			this->exitbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->TabStop = false;
			this->exitbtn->Click += gcnew System::EventHandler(this, &MyForm::exitbtn_Click);
			// 
			// header
			// 
			resources->ApplyResources(this->header, L"header");
			this->header->BackColor = System::Drawing::Color::SteelBlue;
			this->header->Controls->Add(this->label11);
			this->header->Controls->Add(this->flowLayoutPanel1);
			this->header->Controls->Add(this->signin_panel);
			this->header->Controls->Add(this->signup_panel);
			this->header->Controls->Add(this->pictureBox1);
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
			this->flowLayoutPanel1->Controls->Add(this->Home_panel);
			this->flowLayoutPanel1->Controls->Add(this->Shoping_cart_panel);
			this->flowLayoutPanel1->Controls->Add(this->category_panel);
			this->flowLayoutPanel1->Controls->Add(this->panel23);
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			resources->ApplyResources(this->flowLayoutPanel1, L"flowLayoutPanel1");
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			// 
			// Home_panel
			// 
			this->Home_panel->BackColor = System::Drawing::Color::AliceBlue;
			this->Home_panel->Controls->Add(this->Home_icon);
			this->Home_panel->Controls->Add(this->Home_lable);
			this->Home_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->Home_panel, L"Home_panel");
			this->Home_panel->Name = L"Home_panel";
			this->Home_panel->Click += gcnew System::EventHandler(this, &MyForm::Home_panel_Click);
			// 
			// Home_icon
			// 
			this->Home_icon->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Home_icon, L"Home_icon");
			this->Home_icon->Name = L"Home_icon";
			this->Home_icon->TabStop = false;
			this->Home_icon->Click += gcnew System::EventHandler(this, &MyForm::Home_panel_Click);
			// 
			// Home_lable
			// 
			resources->ApplyResources(this->Home_lable, L"Home_lable");
			this->Home_lable->Name = L"Home_lable";
			this->Home_lable->Click += gcnew System::EventHandler(this, &MyForm::Home_panel_Click);
			// 
			// Shoping_cart_panel
			// 
			this->Shoping_cart_panel->BackColor = System::Drawing::Color::AliceBlue;
			this->Shoping_cart_panel->Controls->Add(this->pictureBox11);
			this->Shoping_cart_panel->Controls->Add(this->label10);
			this->Shoping_cart_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->Shoping_cart_panel, L"Shoping_cart_panel");
			this->Shoping_cart_panel->Name = L"Shoping_cart_panel";
			this->Shoping_cart_panel->Click += gcnew System::EventHandler(this, &MyForm::Shoping_cart_panel_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::Shoping_cart_panel_Click);
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::Shoping_cart_panel_Click);
			// 
			// category_panel
			// 
			this->category_panel->BackColor = System::Drawing::Color::AliceBlue;
			this->category_panel->Controls->Add(this->category_icon);
			this->category_panel->Controls->Add(this->category_label);
			this->category_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->category_panel, L"category_panel");
			this->category_panel->Name = L"category_panel";
			this->category_panel->Click += gcnew System::EventHandler(this, &MyForm::category_panel_Click);
			// 
			// category_icon
			// 
			this->category_icon->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->category_icon, L"category_icon");
			this->category_icon->Name = L"category_icon";
			this->category_icon->TabStop = false;
			this->category_icon->Click += gcnew System::EventHandler(this, &MyForm::category_icon_Click);
			// 
			// category_label
			// 
			resources->ApplyResources(this->category_label, L"category_label");
			this->category_label->Name = L"category_label";
			this->category_label->Click += gcnew System::EventHandler(this, &MyForm::category_label_Click);
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
			this->panel13->Click += gcnew System::EventHandler(this, &MyForm::panel13_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::panel13_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::panel13_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::AliceBlue;
			this->panel18->Controls->Add(this->pictureBox7);
			this->panel18->Controls->Add(this->label6);
			this->panel18->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel18, L"panel18");
			this->panel18->Name = L"panel18";
			this->panel18->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::AliceBlue;
			this->panel12->Controls->Add(this->pictureBox4);
			this->panel12->Controls->Add(this->label3);
			this->panel12->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel12, L"panel12");
			this->panel12->Name = L"panel12";
			this->panel12->Click += gcnew System::EventHandler(this, &MyForm::panel12_Click);
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel12_Paint);
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
			// signin_panel
			// 
			this->signin_panel->BackColor = System::Drawing::Color::AliceBlue;
			this->signin_panel->Controls->Add(this->pictureBox2);
			this->signin_panel->Controls->Add(this->label1);
			this->signin_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->signin_panel, L"signin_panel");
			this->signin_panel->Name = L"signin_panel";
			this->signin_panel->Click += gcnew System::EventHandler(this, &MyForm::panel31_Click);
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
			// signup_panel
			// 
			this->signup_panel->BackColor = System::Drawing::Color::AliceBlue;
			this->signup_panel->Controls->Add(this->pictureBox10);
			this->signup_panel->Controls->Add(this->label9);
			this->signup_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->signup_panel, L"signup_panel");
			this->signup_panel->Name = L"signup_panel";
			this->signup_panel->Click += gcnew System::EventHandler(this, &MyForm::panel24_Click);
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
			// main_page_panel
			// 
			resources->ApplyResources(this->main_page_panel, L"main_page_panel");
			this->main_page_panel->BackColor = System::Drawing::Color::White;
			this->main_page_panel->Controls->Add(this->label_title);
			this->main_page_panel->Controls->Add(this->recent_books);
			this->main_page_panel->Controls->Add(this->pictureBox12);
			this->main_page_panel->Name = L"main_page_panel";
			// 
			// label_title
			// 
			resources->ApplyResources(this->label_title, L"label_title");
			this->label_title->ForeColor = System::Drawing::Color::Orange;
			this->label_title->Name = L"label_title";
			// 
			// recent_books
			// 
			resources->ApplyResources(this->recent_books, L"recent_books");
			this->recent_books->Controls->Add(this->panel2);
			this->recent_books->Controls->Add(this->panel4);
			this->recent_books->Controls->Add(this->panel10);
			this->recent_books->Controls->Add(this->panel3);
			this->recent_books->Controls->Add(this->panel9);
			this->recent_books->Controls->Add(this->panel30);
			this->recent_books->Controls->Add(this->panel29);
			this->recent_books->Controls->Add(this->panel8);
			this->recent_books->Controls->Add(this->panel27);
			this->recent_books->Controls->Add(this->panel7);
			this->recent_books->Controls->Add(this->panel21);
			this->recent_books->Controls->Add(this->panel6);
			this->recent_books->Controls->Add(this->panel17);
			this->recent_books->Controls->Add(this->panel5);
			this->recent_books->Controls->Add(this->panel16);
			this->recent_books->Controls->Add(this->panel28);
			this->recent_books->Controls->Add(this->panel26);
			this->recent_books->Controls->Add(this->panel20);
			this->recent_books->Controls->Add(this->panel15);
			this->recent_books->Controls->Add(this->panel11);
			this->recent_books->Name = L"recent_books";
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
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::Window;
			this->panel11->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->panel11, L"panel11");
			this->panel11->Name = L"panel11";
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
			this->Controls->Add(this->main_page_panel);
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
			this->Home_panel->ResumeLayout(false);
			this->Home_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Home_icon))->EndInit();
			this->Shoping_cart_panel->ResumeLayout(false);
			this->Shoping_cart_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->category_panel->ResumeLayout(false);
			this->category_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->category_icon))->EndInit();
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
			this->signin_panel->ResumeLayout(false);
			this->signin_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->signup_panel->ResumeLayout(false);
			this->signup_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->main_page_panel->ResumeLayout(false);
			this->recent_books->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->ResumeLayout(false);

		}
		bool drag = false;
		Point start_point;
		//void set_data()
		//{
		//	DataBase db("db.db");
		//	db.Open();
		//	string row = "(ID,Cover,Title,Author,Price)";

		//	vector<tuple<std::string, std::string, std::string, string>> alpha;
		//	alpha.push_back(make_tuple("covers\\3264_68232_normal.jpg", "پیرمرد و دریا", "ارنست همینگوی", "20,000"));
		//	alpha.push_back(make_tuple("covers\\86104_42858_normal.jpg", "عقاید یک دلقک", "هاینریش بل", "26,000"));
		//	alpha.push_back(make_tuple("covers\\1.jpg", "من پیش از تو", "جوجو مویز", "16,000"));
		//	alpha.push_back(make_tuple("covers\\2.jpg", "کتاب مغازه خودکشی", "ژان تولی", "20,000"));
		//	alpha.push_back(make_tuple("covers\\3.jpg", "جزء از کل", "استیو تولتز", "40,000"));
		//	alpha.push_back(make_tuple("covers\\4.jpg", "مزرعه حیوانات", "جورج اورول", "17,000"));
		//	alpha.push_back(make_tuple("covers\\5.jpg", "سمفونی مردگان", "عباس معروفی", "23,000"));
		//	alpha.push_back(make_tuple("covers\\6.jpg", "مردی به نام اوه", "", "27,000"));
		//	alpha.push_back(make_tuple("covers\\7.jpg", "چشم هایش", "بزرگ علوی", "30,000"));
		//	alpha.push_back(make_tuple("covers\\8.jpg", "دور دنیا در 80 روز", "ژول ورن", "33,000"));
		//	alpha.push_back(make_tuple("covers\\9.jpg", "قمارباز", "فئودور داستایوفسکی", "25,000"));
		//	alpha.push_back(make_tuple("covers\\10.jpg", "استیو جابز", "والتر ایساکسون", "19,000"));
		//	alpha.push_back(make_tuple("covers\\11.jpg", "ناتور دشت", "جی دی سلینجر", "34,000"));
		//	alpha.push_back(make_tuple("covers\\12.jpg", "سینوهه", "میکا والتری", "67,000"));
		//	alpha.push_back(make_tuple("covers\\13.jpg", "فانوس های لرزان", "نسرین تبریزی", "33,000"));
		//	alpha.push_back(make_tuple("covers\\14.jpg", "جهان هولوگرافیک", "مایکل تالبوت", "54,000"));
		//	alpha.push_back(make_tuple("covers\\15.jpg", "آدم آهنی", "نادر ابراهیمی", "43,000"));
		//	alpha.push_back(make_tuple("covers\\16.jpg", "تکنیک های بازار یابی", "حسین یاغچی", "23,000"));
		//	alpha.push_back(make_tuple("covers\\17.jpg", "بازار یابی و فروش نرم افزار", "خدایار عبداللهی", "17,000"));
		//	alpha.push_back(make_tuple("covers\\18.jpg", "تحلیل تکنیکال بازار سرمایه", "جان مورفی", "27,000"));
		//	alpha.push_back(make_tuple("covers\\19.jpg", "", "", ""));
		//	alpha.push_back(make_tuple("covers\\20.jpg", "", "", ""));
		//	int a = 0;

		//	while (a < alpha.size() - 1)
		//	{

		//		string value = "(" + to_string(db.generating_id(1000, 9000)) + "," + get<0>(alpha[a]).c_str() + "," + get<1>(alpha[a]).c_str() + "," + get<2>(alpha[a]).c_str() + "," + get<3>(alpha[a]).c_str() + ")";
		//		db.Insert("Book_Detail", row, value);

		//		a++;
		//		//MessageBox::Show("added : "+a, "added");
		//	}

		//}

		vector<tuple<std::wstring, std::wstring, std::wstring, wstring, wstring, wstring, wstring, wstring>> set_book()
		{
			alpha.push_back(make_tuple(L"covers\\1.jpg", L"من پیش از تو", L"جوجو مویز", L"16,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\3264_68232_normal.jpg", L"پیرمرد و دریا", L"ارنست همینگوی", L"20,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\86104_42858_normal.jpg", L"عقاید یک دلقک", L"هاینریش بل", L"26,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\2.jpg", L"کتاب مغازه خودکشی", L"ژان تولی", L"20,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\3.jpg", L"جزء از کل", L"استیو تولتز", L"40,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\4.jpg", L"مزرعه حیوانات", L"جورج اورول", L"17,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\5.jpg", L"سمفونی مردگان", L"عباس معروفی", L"23,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\6.jpg", L"مردی به نام اوه", L"فردریک بکمن", L"27,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\7.jpg", L"چشم هایش", L"بزرگ علوی", L"30,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\8.jpg", L"دور دنیا در 80 روز", L"ژول ورن", L"33,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\9.jpg", L"قمارباز", L"فئودور داستایوفسکی", L"25,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\10.jpg", L"استیو جابز", L"والتر ایساکسون", L"19,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\11.jpg", L"ناتور دشت", L"جی دی سلینجر", L"34,000", L"رمان", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\12.jpg", L"سینوهه", L"میکا والتری", L"67,000", L"رمان", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\13.jpg", L"فانوس های لرزان", L"نسرین تبریزی", L"33,000", L"روانشناسی", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\14.jpg", L"جهان هولوگرافیک", L"مایکل تالبوت", L"54,000", L"فیزیک", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\15.jpg", L"آدم آهنی", L"نادر ابراهیمی", L"43,000", L"روانسناسی", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\16.jpg", L"تکنیک های بازار یابی", L"حسین یاغچی", L"23,000", L"بازاریابی", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\17.jpg", L"بازار یابی و فروش نرم افزار", L"خدایار عبداللهی", L"17,000", L"بازاریابی", L"انتشارات افق", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\18.jpg", L"تحلیل تکنیکال بازار سرمایه", L"جان مورفی", L"27,000", L"بازاریابی", L"انتشارات مردارید", L"اسد الله امرایی", L""));
			alpha.push_back(make_tuple(L"covers\\19.jpg", L"", L"", L"", L"", L"", L"", L""));
			alpha.push_back(make_tuple(L"covers\\20.jpg", L"", L"", L"", L"", L"", L"", L""));
			return alpha;
		}
		void set_book_test(vector<tuple<std::wstring, std::wstring, std::wstring, wstring, wstring, wstring, wstring, wstring>> alpha)
		{

			int a = 0;
			int size = alpha.size();
			if (!recent_books->HasChildren)
			{
				for (int i = 0; i < size; i++)
				{
					Panel^ newpanel = gcnew Panel();
					recent_books->Controls->Add(newpanel);
				}

			}

			for each (Panel ^ ctrl in recent_books->Controls) {
				bookmadule^ page = gcnew bookmadule();
				for each (PictureBox ^ imagebox in page->Controls->Find("book_pic", true))
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
						labeltitle->Left -= (labeltitle->Width - 59) / 2;
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
				for each (Label ^ labelprice in page->Controls->Find("genre_label", true))
				{

					String^ Text = gcnew String(get<4>(alpha[a]).c_str());
					labelprice->Text = Text;

				}
				for each (Label ^ labelprice in page->Controls->Find("publisher_label", true))
				{

					String^ Text = gcnew String(get<5>(alpha[a]).c_str());
					labelprice->Text = Text;

				}
				for each (Label ^ labelprice in page->Controls->Find("translator_label", true))
				{

					String^ Text = gcnew String(get<6>(alpha[a]).c_str());
					labelprice->Text = Text;

				}


				ctrl->Width = page->Width;
				ctrl->Height = page->Height;
				ctrl->Controls->Add(page);
				if (a < alpha.size() - 1)
					a++;
			}

		}
		BookDetail^ get_detail_for_book_page(Panel^ panel)
		{
			String^ image, ^ title, ^ author, ^ price, ^ genre, ^ translator, ^ publisher;
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
			for each (Label ^ labelprice in panel->Controls->Find("genre_label", true))
			{

				genre = labelprice->Text;

			}
			for each (Label ^ labelprice in panel->Controls->Find("publisher_label", true))
			{

				publisher = labelprice->Text;

			}
			for each (Label ^ labelprice in panel->Controls->Find("translator_label", true))
			{

				translator = labelprice->Text;

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
			for each (RichTextBox ^ bookauthor in page->Controls->Find("book_publisher", true))
			{

				bookauthor->Text = publisher;

			}
			for each (RichTextBox ^ bookauthor in page->Controls->Find("book_translator", true))
			{

				bookauthor->Text = translator;

			}


			return page;
		}
	public: void link_bookdetail_mainpage(BookDetail^ panel)
	{
		recent_books->Hide();
		main_page_panel->Controls->Add(panel);
	}
#pragma endregion
		  //////////////////////////////////////////////////////////////////////////////////////////////////
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
	public:void check_if_sighned_in()
	{
		if (signed_in)
		{
		 Shoping_cart_panel->Show();
		 signin_panel->Hide();
		 signup_panel->Hide();
		}
		else
		{
		 Shoping_cart_panel->Hide();
	
		}

	}
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		check_if_sighned_in();
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

			drag = true;
		start_point.X = e->X;
		start_point.Y = e->Y;
	}
	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (drag)
		{
			Point  p = PointToScreen(Point(e->X, e->Y));
			Point^ final_pos = gcnew Point(p.X - start_point.X, p.Y - start_point.Y);
			Location = Point(p.X - start_point.X, p.Y - start_point.Y);

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
		form2->Height = page->Height + 47;
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
	private: System::Void panel2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: Void category_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ genre = btn->Text;
		booklist result;
		for (int i = 0; i < alpha.size(); i++)
		{
			String^ Text = gcnew String(get<4>(alpha[i]).c_str());
			if (Text == genre)
			{
				result.push_back(alpha[i]);
			}

		}
		main_page_panel->Controls->Clear();
		main_page_panel->Controls->Add(recent_books);
		label_title->Dock = DockStyle::Top;
		label_title->Height = 200;
		label_title->Text = L" کتاب های " + genre;
		label_title->Show();
		main_page_panel->Controls->Add(label_title);
		recent_books->Controls->Clear();
		set_book_test(result);
		recent_books->Show();
	}
	private: Void Author_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = (Button^)sender;
		String^ Author = btn->Text;
		booklist result;
		for (int i = 0; i < alpha.size(); i++)
		{
			String^ Text = gcnew String(get<2>(alpha[i]).c_str());
			if (Text == Author)
			{
				result.push_back(alpha[i]);
			}

		}
		main_page_panel->Controls->Clear();
		main_page_panel->Controls->Add(recent_books);
		recent_books->Location.Y = 90;
		main_page_panel->Controls->Add(label_title);
		label_title->Text = L" آثار  " + Author;
		label_title->Show();
		label_title->Dock = DockStyle::Top;
		label_title->Height = 200;
		recent_books->Controls->Clear();
		set_book_test(result);
		recent_books->Show();
	}

		   void category_click()
		   {

			   Category_Pagel^ catpanel = gcnew Category_Pagel();
			   catpanel->Anchor = (AnchorStyles::Top | AnchorStyles::Right | AnchorStyles::Left);
			   catpanel->AutoScroll = true;
			   for (int i = 0; i < Genres.size() - 1; i++)
			   {
				   Button^ cat = gcnew Button();
				   cat->Anchor = (AnchorStyles::Right | AnchorStyles::Left);
				   cat->Click += gcnew EventHandler(this, &MyForm::category_button_Click);
				   cat->BackColor = Color::DeepSkyBlue;
				   cat->FlatStyle = FlatStyle::Flat;
				   cat->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, FontStyle::Regular, GraphicsUnit::Point,
					   static_cast<System::Byte>(178)));
				   String^ txt = gcnew String(Genres[i].c_str());
				   cat->Text = txt;
				   cat->UseVisualStyleBackColor = false;
				   cat->Height = 100;
				   cat->Width = 600;
				   cat->AutoSize = true;
				   catpanel->category_panel_layout->Controls->Add(cat);
			   }
			   catpanel->category_panel_layout->Height = Genres.size() * 100;
			   main_page_panel->Controls->Clear();
			   main_page_panel->Controls->Add(catpanel);
			   int index = main_page_panel->Controls->IndexOf(catpanel);

		   }
		   void author_click()
		   {

			   Author_Page^ catpanel = gcnew Author_Page();
			   catpanel->Anchor = (AnchorStyles::Top | AnchorStyles::Right | AnchorStyles::Left);
			   catpanel->AutoScroll = true;
			   for (int i = 0; i < Authors.size() - 1; i++)
			   {
				   Button^ cat = gcnew Button();
				   cat->Anchor = (AnchorStyles::Right | AnchorStyles::Left);
				   cat->Click += gcnew EventHandler(this, &MyForm::Author_button_Click);
				   cat->BackColor = Color::DeepSkyBlue;
				   cat->FlatStyle = FlatStyle::Flat;
				   cat->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, FontStyle::Regular, GraphicsUnit::Point,
					   static_cast<System::Byte>(178)));
				   String^ txt = gcnew String(Authors[i].c_str());
				   cat->Text = txt;
				   cat->UseVisualStyleBackColor = false;
				   cat->Height = 100;
				   cat->Width = 600;
				   cat->AutoSize = true;
				   catpanel->Author_panel_layout->Controls->Add(cat);
			   }
			   catpanel->Author_panel_layout->Height = Genres.size() * 100;
			   main_page_panel->Controls->Clear();
			   main_page_panel->Controls->Add(catpanel);
			   int index = main_page_panel->Controls->IndexOf(catpanel);

		   }
			private: Void All_Books() {
				booklist result;
				for (int i = 0; i < alpha.size(); i++)
				{
						result.push_back(alpha[i]);

				}
				main_page_panel->Controls->Clear();
				main_page_panel->Controls->Add(recent_books);
				main_page_panel->Controls->Add(label_title);
				label_title->Show();
				label_title->Text = L"همه کتاب ها ";
				label_title->Dock = DockStyle::Top;
				label_title->Height = 200;
				recent_books->Controls->Clear();
				set_book_test(result);
				recent_books->Show();
			}

	private: System::Void category_label_Click(System::Object^ sender, System::EventArgs^ e) {
		category_click();
	}
	private: System::Void category_icon_Click(System::Object^ sender, System::EventArgs^ e) {
		category_click();
	}

	private: System::Void category_panel_Click(System::Object^ sender, System::EventArgs^ e) {
		category_click();
	}
	private: System::Void Home_panel_Click(System::Object^ sender, System::EventArgs^ e) {
		main_page_panel->AutoScroll = false;
		main_page_panel->HorizontalScroll->Enabled = false;
		main_page_panel->HorizontalScroll->Visible = false;
		main_page_panel->HorizontalScroll->Maximum = 0;
		main_page_panel->AutoScroll = true;
		main_page_panel->Controls->Clear();
		set_book_test(alpha);
		main_page_panel->Controls->Add(recent_books);
		main_page_panel->Controls->Add(pictureBox12);

	}
	private: Void purchase_button_Click(System::Object^ sender, System::EventArgs^ e) {
		signinsignup^ form2 = gcnew signinsignup();
		Virtual_Payment_System^ page = gcnew Virtual_Payment_System();
		form2->Text = "sign up";
		form2->Height = page->Height+30;
		form2->Width = page->Width + 30;
		form2->Text = L"صفحه پرداخت";
		form2->Controls->Add(page);
		form2->Show();

	}

	private: System::Void Shoping_cart_panel_Click(System::Object^ sender, System::EventArgs^ e) {
		Control::ControlCollection^ ctrlCollection = CartPage::Cart->Controls;
		int countChild = ctrlCollection->Count;

		CartPage::Cart->Height = countChild * 358;
		CartPage::Cart->Width = 1177;
		main_page_panel->Controls->Clear();
		main_page_panel->Controls->Add(CartPage::Cart);
		ShoppingCart^ Item = gcnew ShoppingCart();
		bool book_in_cart= false;
		if (CartPage::Cart->Controls->Count > 0)
			book_in_cart = true;
		for each (Control ^ ctrl in CartPage::Cart->Controls->Find("button1", true))
		{
			delete ctrl;
		}
		if (book_in_cart)
		{
			Button^ button1 = gcnew Button();
			button1->BackColor = System::Drawing::Color::SteelBlue;
			button1->FlatAppearance->BorderColor = System::Drawing::Color::CadetBlue;
			button1->ForeColor = System::Drawing::Color::White;
			button1->Name = L"button1";
			button1->Text = L"پرداخت";
			button1->UseVisualStyleBackColor = false;
			button1->Height = 50;
			button1->Width = 1000;
			button1->Click += gcnew EventHandler(this, &MyForm::purchase_button_Click);

			CartPage::Cart->Controls->Add(button1);


		}


	}
	private: System::Void panel13_Click(System::Object^ sender, System::EventArgs^ e) {
		author_click();
	}
		   void StartServer()
		   {
			   
			   Startup("127.0.0.1", 7071, Event_UIChangeProgress, Event_UINewClient, Event_UINewRecieve);
		   }

	private: System::Void panel12_Click(System::Object^ sender, System::EventArgs^ e) {

		Thread^ thread = gcnew Thread(gcnew ThreadStart(this, &MyForm::StartServer));
		thread->Start();
		


	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		All_Books();
	}
	private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}

