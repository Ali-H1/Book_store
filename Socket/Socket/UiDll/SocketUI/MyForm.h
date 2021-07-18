#pragma once
#include<msclr/marshal_cppstd.h>
#include <string>
#include <Windows.h>
#include <fstream>
#include <thread>
#include <thread>            
#include <mutex>              
#include "EmailUC.h"
#include "SeeUC1.h"
#include "EnterUC.h"
#include "SettingUC.h"
#include "SighinAdminUC.h"
#include "BookUC.h"

namespace SocketUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	using std::wstring;
	using std::string;
	using std::ifstream;
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



	[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void  Startup(std::string, int, UIChangeProgress^, UINewClient^, UINewRecieve^);

	[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	int SendFile(std::string path, std::string username);

	[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	int StartDownload(int queueid);

	[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void thread_wait();

	[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void get_client_name(string& name, int id);


	string path;
	string sock_name;
	public ref class MyForm : public System::Windows::Forms::Form
	{
		DelADDCLIENT^ Event_ADDCLIENT;
		DelADDQUEUE^ Event_ADDQUEUE;
		DelProgressBar^ Event_Progress;
		UIChangeProgress^ Event_UIChangeProgress;
		UINewClient^ Event_UINewClient;
		UINewRecieve^ Event_UINewRecieve;
		DelCompelete^ Event_Compelete;
		Delrequest^ Event_request;
	private: System::Windows::Forms::Panel^ MainPanel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;












		   bool IsRunning;
	public:

		MyForm()

		{
			InitializeComponent();
			Rigster();
			IsRunning = false;
			IsTransfer = false;


		}
		void Rigster()
		{
			Event_ADDCLIENT += gcnew DelADDCLIENT(this, &MyForm::AddClient);
			Event_ADDQUEUE += gcnew DelADDQUEUE(this, &MyForm::AddNewQueue);
			Event_Progress += gcnew DelProgressBar(this, &MyForm::ChangeProgress);
			Event_UIChangeProgress += gcnew UIChangeProgress(this, &MyForm::ChangeProgress);
			Event_UINewClient += gcnew UINewClient(this, &MyForm::ChangeClient);
			Event_UINewRecieve += gcnew UINewRecieve(this, &MyForm::NewQueueRow);
			Event_Compelete += gcnew DelCompelete(this, &MyForm::CompeleteTransfer);

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






		bool IsTransfer;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ServerMode;
	private: System::Windows::Forms::ToolStripMenuItem^ dataModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ uploadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Theme;
	private: System::Windows::Forms::ToolStripMenuItem^ Dark;
	private: System::Windows::Forms::ToolStripMenuItem^ Ligth;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ autodownloadradio;
	private: System::Windows::Forms::TextBox^ IP;
	private: System::Windows::Forms::ListView^ QueueList;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ FileName;
	private: System::Windows::Forms::ColumnHeader^ FileExtention;
	private: System::Windows::Forms::ColumnHeader^ Condition;
	private: System::Windows::Forms::ColumnHeader^ DateTime;
	private: System::Windows::Forms::ColumnHeader^ QueueType;
	private: System::Windows::Forms::Button^ BTNDonwload;
	private: System::Windows::Forms::ProgressBar^ PBTreansfered;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ BTNStart;
	private: System::Windows::Forms::TextBox^ Port;
	private: System::Windows::Forms::ComboBox^ Clients;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ header;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;




	private: System::Windows::Forms::Panel^ category_panel;
	private: System::Windows::Forms::PictureBox^ category_icon;
	private: System::Windows::Forms::Label^ category_label;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Panel^ signin_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	protected:

	private: System::Windows::Forms::ColumnHeader^ RowIndex;
	private: System::Windows::Forms::ColumnHeader^ Name;
	private: System::Windows::Forms::ColumnHeader^ Tenasferd;
	private: System::Windows::Forms::ColumnHeader^ Type;
	private: System::Windows::Forms::ColumnHeader^ Time;
	private: System::Windows::Forms::ColumnHeader^ Date;
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
			this->RowIndex = (gcnew System::Windows::Forms::ColumnHeader());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Tenasferd = (gcnew System::Windows::Forms::ColumnHeader());
			this->Type = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ServerMode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Theme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Dark = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ligth = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->autodownloadradio = (gcnew System::Windows::Forms::RadioButton());
			this->IP = (gcnew System::Windows::Forms::TextBox());
			this->QueueList = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->FileName = (gcnew System::Windows::Forms::ColumnHeader());
			this->FileExtention = (gcnew System::Windows::Forms::ColumnHeader());
			this->Condition = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateTime = (gcnew System::Windows::Forms::ColumnHeader());
			this->QueueType = (gcnew System::Windows::Forms::ColumnHeader());
			this->BTNDonwload = (gcnew System::Windows::Forms::Button());
			this->PBTreansfered = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BTNStart = (gcnew System::Windows::Forms::Button());
			this->Port = (gcnew System::Windows::Forms::TextBox());
			this->Clients = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->header = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->signin_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->category_panel = (gcnew System::Windows::Forms::Panel());
			this->category_icon = (gcnew System::Windows::Forms::PictureBox());
			this->category_label = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->header->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->signin_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->category_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->category_icon))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// RowIndex
			// 
			this->RowIndex->Text = L"Index";
			this->RowIndex->Width = 42;
			// 
			// Name
			// 
			this->Name->Text = L"File Name";
			this->Name->Width = 118;
			// 
			// Tenasferd
			// 
			this->Tenasferd->Text = L"Tenasferd";
			this->Tenasferd->Width = 66;
			// 
			// Type
			// 
			this->Type->Text = L"Type";
			// 
			// Time
			// 
			this->Time->Text = L"Time";
			this->Time->Width = 80;
			// 
			// Date
			// 
			this->Date->Text = L"Date";
			this->Date->Width = 104;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->dataModeToolStripMenuItem, this->Theme
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(867, 24);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ServerMode });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->fileToolStripMenuItem->Text = L"Mode";
			// 
			// ServerMode
			// 
			this->ServerMode->Checked = true;
			this->ServerMode->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ServerMode->Name = L"ServerMode";
			this->ServerMode->Size = System::Drawing::Size(106, 22);
			this->ServerMode->Text = L"Server";
			this->ServerMode->Click += gcnew System::EventHandler(this, &MyForm::ServerMode_Click);
			// 
			// dataModeToolStripMenuItem
			// 
			this->dataModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem1 });
			this->dataModeToolStripMenuItem->Name = L"dataModeToolStripMenuItem";
			this->dataModeToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->dataModeToolStripMenuItem->Text = L"Upload";
			this->dataModeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dataModeToolStripMenuItem_Click);
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->Checked = true;
			this->fileToolStripMenuItem1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->uploadToolStripMenuItem });
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(92, 22);
			this->fileToolStripMenuItem1->Text = L"File";
			this->fileToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem1_Click);
			// 
			// uploadToolStripMenuItem
			// 
			this->uploadToolStripMenuItem->Name = L"uploadToolStripMenuItem";
			this->uploadToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->uploadToolStripMenuItem->Text = L"Upload";
			this->uploadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uploadToolStripMenuItem_Click);
			// 
			// Theme
			// 
			this->Theme->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Dark, this->Ligth });
			this->Theme->Name = L"Theme";
			this->Theme->Size = System::Drawing::Size(55, 20);
			this->Theme->Text = L"Theme";
			// 
			// Dark
			// 
			this->Dark->Name = L"Dark";
			this->Dark->Size = System::Drawing::Size(101, 22);
			this->Dark->Text = L"Dark";
			this->Dark->Click += gcnew System::EventHandler(this, &MyForm::Dark_Click);
			// 
			// Ligth
			// 
			this->Ligth->Checked = true;
			this->Ligth->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Ligth->Name = L"Ligth";
			this->Ligth->Size = System::Drawing::Size(101, 22);
			this->Ligth->Text = L"Ligth";
			this->Ligth->Click += gcnew System::EventHandler(this, &MyForm::ligthToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->autodownloadradio);
			this->panel1->Controls->Add(this->IP);
			this->panel1->Controls->Add(this->QueueList);
			this->panel1->Controls->Add(this->BTNDonwload);
			this->panel1->Controls->Add(this->PBTreansfered);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->BTNStart);
			this->panel1->Controls->Add(this->Port);
			this->panel1->Controls->Add(this->Clients);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(26, 514);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(650, 423);
			this->panel1->TabIndex = 42;
			this->panel1->Visible = false;
			// 
			// autodownloadradio
			// 
			this->autodownloadradio->AutoSize = true;
			this->autodownloadradio->BackColor = System::Drawing::Color::Lime;
			this->autodownloadradio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->autodownloadradio->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->autodownloadradio->Location = System::Drawing::Point(386, 25);
			this->autodownloadradio->Name = L"autodownloadradio";
			this->autodownloadradio->Size = System::Drawing::Size(136, 24);
			this->autodownloadradio->TabIndex = 51;
			this->autodownloadradio->TabStop = true;
			this->autodownloadradio->Text = L"Auto Download";
			this->autodownloadradio->UseVisualStyleBackColor = false;
			// 
			// IP
			// 
			this->IP->BackColor = System::Drawing::Color::Lime;
			this->IP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IP->ForeColor = System::Drawing::Color::Black;
			this->IP->Location = System::Drawing::Point(47, 25);
			this->IP->Name = L"IP";
			this->IP->Size = System::Drawing::Size(71, 26);
			this->IP->TabIndex = 46;
			this->IP->Text = L"127.0.0.1";
			this->IP->TextChanged += gcnew System::EventHandler(this, &MyForm::IP_TextChanged);
			// 
			// QueueList
			// 
			this->QueueList->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->QueueList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->ID, this->FileName,
					this->FileExtention, this->Condition, this->DateTime, this->QueueType
			});
			this->QueueList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueueList->ForeColor = System::Drawing::Color::Black;
			this->QueueList->HideSelection = false;
			this->QueueList->Location = System::Drawing::Point(14, 72);
			this->QueueList->Name = L"QueueList";
			this->QueueList->Size = System::Drawing::Size(613, 278);
			this->QueueList->TabIndex = 42;
			this->QueueList->UseCompatibleStateImageBehavior = false;
			this->QueueList->View = System::Windows::Forms::View::Details;
			this->QueueList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::QueueList_SelectedIndexChanged);
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			this->ID->Width = 65;
			// 
			// FileName
			// 
			this->FileName->Text = L"Name";
			this->FileName->Width = 100;
			// 
			// FileExtention
			// 
			this->FileExtention->Text = L"Extention";
			this->FileExtention->Width = 96;
			// 
			// Condition
			// 
			this->Condition->Text = L"Condition";
			this->Condition->Width = 98;
			// 
			// DateTime
			// 
			this->DateTime->Text = L"Date and Time";
			this->DateTime->Width = 127;
			// 
			// QueueType
			// 
			this->QueueType->Text = L"QueueType";
			this->QueueType->Width = 107;
			// 
			// BTNDonwload
			// 
			this->BTNDonwload->BackColor = System::Drawing::Color::SpringGreen;
			this->BTNDonwload->Enabled = false;
			this->BTNDonwload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNDonwload->ForeColor = System::Drawing::Color::Black;
			this->BTNDonwload->Location = System::Drawing::Point(539, 369);
			this->BTNDonwload->Name = L"BTNDonwload";
			this->BTNDonwload->Size = System::Drawing::Size(88, 32);
			this->BTNDonwload->TabIndex = 44;
			this->BTNDonwload->Text = L"Download";
			this->BTNDonwload->UseVisualStyleBackColor = false;
			this->BTNDonwload->TextChanged += gcnew System::EventHandler(this, &MyForm::BTNDonwload_Click);
			this->BTNDonwload->Click += gcnew System::EventHandler(this, &MyForm::BTNDonwload_Click);
			// 
			// PBTreansfered
			// 
			this->PBTreansfered->BackColor = System::Drawing::Color::Lime;
			this->PBTreansfered->ForeColor = System::Drawing::Color::Black;
			this->PBTreansfered->Location = System::Drawing::Point(14, 369);
			this->PBTreansfered->Name = L"PBTreansfered";
			this->PBTreansfered->Size = System::Drawing::Size(466, 32);
			this->PBTreansfered->TabIndex = 50;
			this->PBTreansfered->Click += gcnew System::EventHandler(this, &MyForm::PBTreansfered_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(141, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 20);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Port";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// BTNStart
			// 
			this->BTNStart->BackColor = System::Drawing::Color::SpringGreen;
			this->BTNStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNStart->ForeColor = System::Drawing::Color::Black;
			this->BTNStart->Location = System::Drawing::Point(539, 22);
			this->BTNStart->Name = L"BTNStart";
			this->BTNStart->Size = System::Drawing::Size(88, 30);
			this->BTNStart->TabIndex = 43;
			this->BTNStart->Text = L"Start";
			this->BTNStart->UseVisualStyleBackColor = false;
			this->BTNStart->Click += gcnew System::EventHandler(this, &MyForm::BTNStart_Click);
			// 
			// Port
			// 
			this->Port->BackColor = System::Drawing::Color::Lime;
			this->Port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Port->ForeColor = System::Drawing::Color::Black;
			this->Port->Location = System::Drawing::Point(185, 25);
			this->Port->Name = L"Port";
			this->Port->Size = System::Drawing::Size(51, 26);
			this->Port->TabIndex = 48;
			this->Port->Text = L"7071";
			this->Port->TextChanged += gcnew System::EventHandler(this, &MyForm::Port_TextChanged);
			// 
			// Clients
			// 
			this->Clients->BackColor = System::Drawing::Color::Lime;
			this->Clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clients->ForeColor = System::Drawing::Color::Black;
			this->Clients->FormattingEnabled = true;
			this->Clients->Location = System::Drawing::Point(262, 24);
			this->Clients->Name = L"Clients";
			this->Clients->Size = System::Drawing::Size(92, 28);
			this->Clients->TabIndex = 49;
			this->Clients->Text = L"Client";
			this->Clients->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Clients_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(17, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 20);
			this->label1->TabIndex = 45;
			this->label1->Text = L"IP";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(15, 21);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// header
			// 
			this->header->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->header->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->header->Controls->Add(this->label11);
			this->header->Controls->Add(this->flowLayoutPanel1);
			this->header->Controls->Add(this->pictureBox1);
			this->header->Location = System::Drawing::Point(673, 37);
			this->header->Margin = System::Windows::Forms::Padding(2);
			this->header->MaximumSize = System::Drawing::Size(160, 900);
			this->header->MinimumSize = System::Drawing::Size(160, 900);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(160, 900);
			this->header->TabIndex = 45;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 13.8F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Orange;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(39, 97);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 22);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Amazon";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label14);
			this->flowLayoutPanel1->Controls->Add(this->textBox4);
			this->flowLayoutPanel1->Controls->Add(this->label13);
			this->flowLayoutPanel1->Controls->Add(this->textBox3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->signin_panel);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel23);
			this->flowLayoutPanel1->Controls->Add(this->category_panel);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(15, 148);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->flowLayoutPanel1->Size = System::Drawing::Size(136, 550);
			this->flowLayoutPanel1->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label14->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label14->Location = System::Drawing::Point(73, 0);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 24);
			this->label14->TabIndex = 21;
			this->label14->Text = L"نام کاربری";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Lime;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(-2, 26);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 28);
			this->textBox4->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label13->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label13->Location = System::Drawing::Point(88, 56);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 24);
			this->label13->TabIndex = 22;
			this->label13->Text = L"گذرواژه";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Lime;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(-2, 82);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '.';
			this->textBox3->Size = System::Drawing::Size(136, 27);
			this->textBox3->TabIndex = 25;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(41, 113);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 34);
			this->button4->TabIndex = 23;
			this->button4->Text = L"ورود";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(41, 151);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 34);
			this->button3->TabIndex = 26;
			this->button3->Text = L"فراموشی رمز عبور";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// signin_panel
			// 
			this->signin_panel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->signin_panel->BackColor = System::Drawing::Color::GhostWhite;
			this->signin_panel->Controls->Add(this->pictureBox2);
			this->signin_panel->Controls->Add(this->label5);
			this->signin_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signin_panel->Location = System::Drawing::Point(14, 189);
			this->signin_panel->Margin = System::Windows::Forms::Padding(2);
			this->signin_panel->Name = L"signin_panel";
			this->signin_panel->Size = System::Drawing::Size(120, 37);
			this->signin_panel->TabIndex = 6;
			this->signin_panel->Visible = false;
			this->signin_panel->Click += gcnew System::EventHandler(this, &MyForm::signin_panel_Click);
			this->signin_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::signin_panel_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(85, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(27, 4);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"ورود";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::signin_panel_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::GhostWhite;
			this->panel12->Controls->Add(this->label4);
			this->panel12->Controls->Add(this->pictureBox4);
			this->panel12->Controls->Add(this->label3);
			this->panel12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel12->Location = System::Drawing::Point(12, 232);
			this->panel12->Margin = System::Windows::Forms::Padding(4);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(120, 37);
			this->panel12->TabIndex = 6;
			this->panel12->Visible = false;
			this->panel12->Click += gcnew System::EventHandler(this, &MyForm::panel12_Click);
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel12_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(11, 4);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ورود ادمین";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::panel12_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(85, 1);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(35, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F));
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(2, 72);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ورود ادمین ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::GhostWhite;
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel3->Location = System::Drawing::Point(12, 277);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(120, 37);
			this->panel3->TabIndex = 6;
			this->panel3->Visible = false;
			this->panel3->Click += gcnew System::EventHandler(this, &MyForm::panel3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(85, 0);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 35);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(15, 6);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 24);
			this->label9->TabIndex = 3;
			this->label9->Text = L"کتاب ها ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::panel3_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::GhostWhite;
			this->panel18->Controls->Add(this->pictureBox7);
			this->panel18->Controls->Add(this->label6);
			this->panel18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel18->Location = System::Drawing::Point(12, 322);
			this->panel18->Margin = System::Windows::Forms::Padding(4);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(120, 37);
			this->panel18->TabIndex = 5;
			this->panel18->Visible = false;
			this->panel18->Click += gcnew System::EventHandler(this, &MyForm::panel18_Click);
			this->panel18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel18_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.ErrorImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(85, 1);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(35, 35);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(14, 6);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 24);
			this->label6->TabIndex = 3;
			this->label6->Text = L"تنظیمات ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::panel18_Click);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::GhostWhite;
			this->panel23->Controls->Add(this->pictureBox9);
			this->panel23->Controls->Add(this->label8);
			this->panel23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel23->Location = System::Drawing::Point(12, 367);
			this->panel23->Margin = System::Windows::Forms::Padding(4);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(120, 37);
			this->panel23->TabIndex = 10;
			this->panel23->Visible = false;
			this->panel23->Click += gcnew System::EventHandler(this, &MyForm::panel23_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox9->Location = System::Drawing::Point(85, 0);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(35, 35);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(-1, 6);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 24);
			this->label8->TabIndex = 3;
			this->label8->Text = L"مشاهده سفارش";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::panel23_Click);
			// 
			// category_panel
			// 
			this->category_panel->BackColor = System::Drawing::Color::GhostWhite;
			this->category_panel->Controls->Add(this->category_icon);
			this->category_panel->Controls->Add(this->category_label);
			this->category_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->category_panel->Location = System::Drawing::Point(12, 412);
			this->category_panel->Margin = System::Windows::Forms::Padding(4);
			this->category_panel->Name = L"category_panel";
			this->category_panel->Size = System::Drawing::Size(120, 37);
			this->category_panel->TabIndex = 9;
			this->category_panel->Visible = false;
			this->category_panel->Click += gcnew System::EventHandler(this, &MyForm::category_panel_Click);
			this->category_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::category_panel_Paint);
			// 
			// category_icon
			// 
			this->category_icon->BackColor = System::Drawing::Color::Transparent;
			this->category_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"category_icon.Image")));
			this->category_icon->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->category_icon->Location = System::Drawing::Point(85, 0);
			this->category_icon->Margin = System::Windows::Forms::Padding(2);
			this->category_icon->Name = L"category_icon";
			this->category_icon->Size = System::Drawing::Size(35, 35);
			this->category_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->category_icon->TabIndex = 1;
			this->category_icon->TabStop = false;
			// 
			// category_label
			// 
			this->category_label->AutoSize = true;
			this->category_label->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->category_label->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->category_label->Location = System::Drawing::Point(23, 5);
			this->category_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->category_label->Name = L"category_label";
			this->category_label->Size = System::Drawing::Size(38, 24);
			this->category_label->TabIndex = 3;
			this->category_label->Text = L"ایمیل";
			this->category_label->Click += gcnew System::EventHandler(this, &MyForm::category_panel_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::GhostWhite;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel2->Location = System::Drawing::Point(12, 457);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(120, 37);
			this->panel2->TabIndex = 10;
			this->panel2->Visible = false;
			this->panel2->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(6, 6);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 24);
			this->label7->TabIndex = 4;
			this->label7->Text = L"دانلود و اپلود";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(85, 2);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->MainPanel->Location = System::Drawing::Point(8, 38);
			this->MainPanel->MaximumSize = System::Drawing::Size(650, 454);
			this->MainPanel->MinimumSize = System::Drawing::Size(650, 454);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(650, 454);
			this->MainPanel->TabIndex = 46;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(884, 661);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->header);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 700);
			this->MinimumSize = System::Drawing::Size(900, 700);
			this->Opacity = 0.85;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->signin_panel->ResumeLayout(false);
			this->signin_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->category_panel->ResumeLayout(false);
			this->category_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->category_icon))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ currentDir() {
			return System::AppContext::BaseDirectory;
		}
		wstring s2ws(const string& str)
		{
			int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
			std::wstring wstrTo(size_needed, 0);
			MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
			return wstrTo;
		}

		std::string to_stirng(String^ str)
		{
			msclr::interop::marshal_context contex;
			return contex.marshal_as<std::string>(str);
		}
		void AddClient(String^ Username, bool flag)
		{
			if (flag)
			{
				if (this->InvokeRequired)
				{
					this->Invoke(Event_ADDCLIENT, Username, flag);
					return;
				}
				Clients->Items->Add(Username);
			}
			else
			{
				if (this->InvokeRequired)
					this->Invoke(Event_ADDCLIENT, Username, flag);
				Clients->Items->Remove(Username);
			}


		}
		void ChangeClient(std::string username, bool flag)
		{
			AddClient(gcnew String(username.c_str()), flag);
		}
		void AddNewQueue(array<String^>^ row)
		{
			if (this->InvokeRequired)
			{
				this->Invoke(Event_ADDQUEUE, gcnew array<Object^> { row });
				return;
			}
			ListViewItem^ item = gcnew ListViewItem(row);
			QueueList->Items->Add(item);
			if (autodownloadradio->Checked)
			{
				auto last = QueueList->Items->Count - 1;
				QueueList->Items[last]->Selected = true;

			}
		}
		void NewQueueRow(int Queueid, String^ Name, String^ Extention)
		{
			array<String^>^ row = { Queueid.ToString() , Name , Extention , "0" , DateTime::Now.ToString() , "Upload" };
			AddNewQueue(row);
		}
		void NewQueueRow(int Queueid, std::string Name, std::string Extention)
		{
			array<String^>^ row = { Queueid.ToString() , gcnew String(Name.c_str()) , gcnew String(Extention.c_str()) , "0" , DateTime::Now.ToString() , "Download" };
			Event_ADDQUEUE(row);
		}


		void CompeleteTransfer(int Queueid)
		{
			std::this_thread::sleep_for(std::chrono::microseconds(10));
			/// <summary>
			/// ////////////////
			/// </summary>
			/// <param name="Queueid"></param>
			Thread::Sleep(5000);

			if (this->InvokeRequired)
			{
				this->Invoke(Event_Compelete, Queueid);
				return;
			}
			IsTransfer = false;
			for each (ListViewItem ^ var in QueueList->Items)
			{
				if (var->SubItems[0]->Text == Queueid.ToString())
					var->SubItems[3]->Text = "1";
			}


		}
	private: System::Void ClientMode_Click(System::Object^ sender, System::EventArgs^ e) {
		ServerMode->Checked = false;
		Clients->Visible = false;
		BTNStart->Text = "Connect";
	}
	private: System::Void ServerMode_Click(System::Object^ sender, System::EventArgs^ e) {
		ServerMode->Checked = true;
		Clients->Visible = true;
		BTNStart->Text = "Start";
	}
		   void StartServer()
		   {
			   std::string ip = to_stirng(IP->Text);
			   int port = Convert::ToInt32(Port->Text);
			   IsRunning = true;
			   
			 //  auto temp = currentDir();
			   Startup(ip, port, Event_UIChangeProgress, Event_UINewClient, Event_UINewRecieve);
		   }
	private: System::Void uploadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (IsRunning && !IsTransfer)
			{
				OpenFileDialog^ ofd = gcnew OpenFileDialog();
				ofd->Multiselect = false;
				ofd->CheckFileExists = true;
				ofd->CheckPathExists = true;
				ofd->Title = "Uplaod File";
				if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					try
					{
						std::string path = to_stirng(ofd->FileName);
						int queueid = SendFile(path, to_stirng(Clients->SelectedItem->ToString()));
						IsTransfer = true;
						NewQueueRow(queueid, Path::GetFileNameWithoutExtension(ofd->FileName), Path::GetExtension(ofd->FileName));
					}
					catch (const std::exception& ex)
					{
						throw gcnew Exception(gcnew String(ex.what()));
					}

				}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void BTNStart_Click(System::Object^ sender, System::EventArgs^ e) {

		Thread^ thread = gcnew Thread(gcnew ThreadStart(this, &MyForm::StartServer));
		thread->Start();
		BTNStart->Enabled = false;

	}
	void thread_send()
	{
		thread_wait();
		SendFile(path, sock_name);

	}
	private: System::Void QueueList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((((ListView^)sender)->SelectedItems->Count == 1) && IsRunning && !IsTransfer)
		{
			ListViewItem^ item = ((ListView^)sender)->SelectedItems[0];
			if (item->SubItems[5]->Text == "Download" && item->SubItems[3]->Text == "0")
			{
				BTNDonwload->Enabled = true;
				if (autodownloadradio->Checked)
				{
					int queueid = Convert::ToInt32(QueueList->SelectedItems[0]->SubItems[0]->Text);
					PBTreansfered->Value = 0;
					int socket_id = StartDownload(queueid);
					path = "respond" + std::to_string(socket_id) + ".txt";
					
					get_client_name(sock_name, socket_id);
					Thread^ thread_send = gcnew Thread(gcnew ThreadStart(this, &MyForm::thread_send));
					thread_send->Start();

					//std::thread thread_obj(SendFile,path,sock_name);

					auto last = QueueList->Items->Count - 1;
					QueueList->Items[last]->Selected = false;

				}

			}
			else
				BTNDonwload->Enabled = false;
		}
		else
			BTNDonwload->Enabled = false;
	}
		   void ChangeProgress(int queuid, int value)
		   {
			   if (this->InvokeRequired)
				   this->Invoke(Event_Progress, queuid, value);
			   PBTreansfered->Value = value;
			   if (PBTreansfered->Value == 100)
				   CompeleteTransfer(queuid);

		   }
	private: System::Void BTNDonwload_Click(System::Object^ sender, System::EventArgs^ e) {
		BTNDonwload->Enabled = false;
		int queueid = Convert::ToInt32(QueueList->SelectedItems[0]->SubItems[0]->Text);
		StartDownload(queueid);
		auto last = QueueList->Items->Count - 1;
		QueueList->Items[last]->Selected = false;

		//string txt;

		//String^ Text = gcnew String(s2ws(txt).c_str());
		//MessageBox::Show(Text, Text);


	}
	private: System::Void messageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Clients_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Port_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PBTreansfered_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void category_label_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {

		panel1->Show();

	}
	private: System::Void fileToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataModeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void signin_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {


	}
	private: System::Void category_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {


	}
	
	
	private: System::Void panel18_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {


	}
	private: System::Void category_panel_Click(System::Object^ sender, System::EventArgs^ e) {

		MainPanel->Controls->Clear();
		EmailUC^ Uc = gcnew EmailUC();
		MainPanel->Controls->Add(Uc);

	}
	private: System::Void panel23_Click(System::Object^ sender, System::EventArgs^ e) {

		MainPanel->Controls->Clear();
		SeeUC1^ Uc1 = gcnew SeeUC1();
		MainPanel->Controls->Add(Uc1);


	}
	private: System::Void panel18_Click(System::Object^ sender, System::EventArgs^ e) {

		MainPanel->Controls->Clear();
		SettingUC^ Uc2 = gcnew SettingUC();
		MainPanel->Controls->Add(Uc2);

	}
	private: System::Void panel12_Click(System::Object^ sender, System::EventArgs^ e) {

		MainPanel->Controls->Clear();
		SighinAdminUC^ Uc3 = gcnew SighinAdminUC();
		MainPanel->Controls->Add(Uc3);

	}
	private: System::Void signin_panel_Click(System::Object^ sender, System::EventArgs^ e) {

		MainPanel->Controls->Clear();
		EnterUC^ Uc4 = gcnew EnterUC();
		MainPanel->Controls->Add(Uc4);

	}
    private: System::Void panel3_Click(System::Object^ sender, System::EventArgs^ e) {

        MainPanel->Controls->Clear();
	    BookUC^ Uc5 = gcnew BookUC();
	    MainPanel->Controls->Add(Uc5);


    }

	private: System::Void ligthToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		Dark->Checked = false;
		Ligth->Checked = true;
		//string txt;
		//Message_client_(1041, txt);
		//String^ Text = gcnew String(s2ws(txt).c_str());
		//MessageBox::Show(Text, Text);


		this->BackColor = System::Drawing::Color::GhostWhite;
		this->PBTreansfered->BackColor = System::Drawing::Color::Lime;
		this->Clients->BackColor = System::Drawing::Color::Lime;
		this->Port->BackColor = System::Drawing::Color::Lime;
		this->label2->BackColor = System::Drawing::Color::GhostWhite;
		this->IP->BackColor = System::Drawing::Color::Lime;
		this->label1->BackColor = System::Drawing::Color::GhostWhite;
		this->BTNStart->BackColor = System::Drawing::Color::Lime;
		this->BTNDonwload->BackColor = System::Drawing::Color::Lime;
		this->autodownloadradio->BackColor = System::Drawing::Color::Lime;
		this->QueueList->BackColor = System::Drawing::Color::MediumSeaGreen;


		this->PBTreansfered->ForeColor = System::Drawing::Color::Black;
		this->Clients->ForeColor = System::Drawing::Color::Black;
		this->Port->ForeColor = System::Drawing::Color::Black;
		this->label2->ForeColor = System::Drawing::Color::Black;
		this->IP->ForeColor = System::Drawing::Color::Black;
		this->label1->ForeColor = System::Drawing::Color::Black;
		this->BTNStart->ForeColor = System::Drawing::Color::Black;
		this->BTNDonwload->ForeColor = System::Drawing::Color::Black;
		this->QueueList->ForeColor = System::Drawing::Color::Black;
		this->autodownloadradio->ForeColor = System::Drawing::Color::Black;


		this->header->BackColor = System::Drawing::Color::MediumSeaGreen;
	
		this->signin_panel->BackColor = System::Drawing::Color::GhostWhite;
		this->panel12->BackColor = System::Drawing::Color::GhostWhite;
		this->panel23->BackColor = System::Drawing::Color::GhostWhite;
		this->panel3->BackColor = System::Drawing::Color::GhostWhite;
		this->category_panel->BackColor = System::Drawing::Color::GhostWhite;
		this->panel2->BackColor = System::Drawing::Color::GhostWhite;
		this->panel18->BackColor = System::Drawing::Color::GhostWhite;
		this->label4->ForeColor = System::Drawing::Color::Black;
		this->label5->ForeColor = System::Drawing::Color::Black;
		this->label6->ForeColor = System::Drawing::Color::Black;
		this->label7->ForeColor = System::Drawing::Color::Black;
		this->label8->ForeColor = System::Drawing::Color::Black;
		this->label9->ForeColor = System::Drawing::Color::Black;
		this->category_label->ForeColor = System::Drawing::Color::Black;



	}
	private: System::Void Dark_Click(System::Object^ sender, System::EventArgs^ e) {

		Dark->Checked = true;
		Ligth->Checked = false;
		this->BackColor = System::Drawing::Color::Black;
		this->PBTreansfered->BackColor = System::Drawing::Color::MediumBlue;
		this->Clients->BackColor = System::Drawing::Color::MediumBlue;
		this->Port->BackColor = System::Drawing::Color::MediumBlue;
		this->label2->BackColor = System::Drawing::Color::Black;
		this->IP->BackColor = System::Drawing::Color::MediumBlue;
		this->label1->BackColor = System::Drawing::Color::Black;
		this->BTNStart->BackColor = System::Drawing::Color::MediumBlue;
		this->BTNDonwload->BackColor = System::Drawing::Color::MediumBlue;
		this->autodownloadradio->BackColor = System::Drawing::Color::MediumBlue;
		this->QueueList->BackColor = System::Drawing::Color::DarkBlue;


		this->PBTreansfered->ForeColor = System::Drawing::Color::GhostWhite;
		this->Clients->ForeColor = System::Drawing::Color::GhostWhite;
		this->Port->ForeColor = System::Drawing::Color::GhostWhite;
		this->label2->ForeColor = System::Drawing::Color::GhostWhite;
		this->IP->ForeColor = System::Drawing::Color::GhostWhite;
		this->label1->ForeColor = System::Drawing::Color::GhostWhite;
		this->BTNStart->ForeColor = System::Drawing::Color::GhostWhite;
		this->BTNDonwload->ForeColor = System::Drawing::Color::GhostWhite;
		this->QueueList->ForeColor = System::Drawing::Color::GhostWhite;
		this->autodownloadradio->ForeColor = System::Drawing::Color::GhostWhite;

		this->header->BackColor = System::Drawing::Color::DarkBlue;
		this->signin_panel->BackColor = System::Drawing::Color::Black;
		this->panel12->BackColor = System::Drawing::Color::Black;
		this->panel23->BackColor = System::Drawing::Color::Black;
		this->panel3->BackColor = System::Drawing::Color::Black;
		this->category_panel->BackColor = System::Drawing::Color::Black;
		this->panel2->BackColor = System::Drawing::Color::Black;
		this->panel18->BackColor = System::Drawing::Color::Black;
		this->label4->ForeColor = System::Drawing::Color::GhostWhite;
		this->label5->ForeColor = System::Drawing::Color::GhostWhite;
		this->label6->ForeColor = System::Drawing::Color::GhostWhite;
		this->label7->ForeColor = System::Drawing::Color::GhostWhite;
		this->label8->ForeColor = System::Drawing::Color::GhostWhite;
		this->label9->ForeColor = System::Drawing::Color::GhostWhite;
		this->category_label->ForeColor = System::Drawing::Color::GhostWhite;




	}
	

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	panel12->Visible = true;
	panel3->Visible = true;
	panel18->Visible = true;
	panel23->Visible = true;
	panel2->Visible = true;
	category_panel->Visible = true;

	textBox3->Visible = false;
	textBox4->Visible = false;

	label13->Visible = false;
	label14->Visible = false;

	button3->Visible = false;
	button4->Visible = false;


}
};
}
