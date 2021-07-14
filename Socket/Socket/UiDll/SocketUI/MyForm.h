#pragma once
#include<msclr/marshal_cppstd.h>
#include <string>
#include <Windows.h>
#include <fstream>
#include <thread>
#include <thread>            
#include <mutex>              
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
	delegate void DelADDCLIENT(String^,bool);
	delegate void DelADDQUEUE(array< String^>^);
	delegate void DelProgressBar(int,int);
	delegate void DelCompelete(int);
	delegate void Delrequest();


	[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
	delegate void UIChangeProgress(int queueid, int value);
	[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
	delegate void UINewClient(std::string, bool flag);
	[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
	delegate void UINewRecieve(int Queueid, std::string Name, std::string Extention);


	[DllImport("ServerDLL.dll" , CallingConvention = CallingConvention::Cdecl)]
	 void  Startup(std::string , int , UIChangeProgress^, UINewClient^, UINewRecieve^);

	 [DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	 int SendFile(std::string path, std::string username);

	 [DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	 void StartDownload(int queueid);

	 [DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	 void thread_wait();


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
		bool IsRunning;
	private: System::Windows::Forms::ToolStripMenuItem^ Theme;
	private: System::Windows::Forms::ToolStripMenuItem^ Dark;
	private: System::Windows::Forms::ToolStripMenuItem^ Ligth;
	private: System::Windows::Forms::RadioButton^ autodownloadradio;




		   bool IsTransfer;
	public:MyForm()
		{
			InitializeComponent();
			Rigster();
			IsRunning = false;
			IsTransfer = false;
		}
		  void Rigster()
		  {
			  Event_ADDCLIENT += gcnew DelADDCLIENT(this, &MyForm::AddClient);
			  Event_ADDQUEUE	+= gcnew DelADDQUEUE(this, &MyForm::AddNewQueue);
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

	protected:

	private: System::Windows::Forms::ColumnHeader^ RowIndex;
	private: System::Windows::Forms::ColumnHeader^ Name;
	private: System::Windows::Forms::ColumnHeader^ Tenasferd;
	private: System::Windows::Forms::ColumnHeader^ Type;
	private: System::Windows::Forms::ColumnHeader^ Time;
	private: System::Windows::Forms::ColumnHeader^ Date;
	private: System::Windows::Forms::ProgressBar^ PBTreansfered;
	private: System::Windows::Forms::ComboBox^ Clients;
	private: System::Windows::Forms::TextBox^ Port;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ IP;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BTNStart;
	private: System::Windows::Forms::Button^ BTNDonwload;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ServerMode;

	private: System::Windows::Forms::ToolStripMenuItem^ dataModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;

	private: System::Windows::Forms::ListView^ QueueList;
	private: System::Windows::Forms::ColumnHeader^ ID;

	private: System::Windows::Forms::ColumnHeader^ FileName;
	private: System::Windows::Forms::ColumnHeader^ FileExtention;
	private: System::Windows::Forms::ColumnHeader^ Condition;

	private: System::Windows::Forms::ColumnHeader^ DateTime;
	private: System::Windows::Forms::ColumnHeader^ QueueType;
	private: System::Windows::Forms::ToolStripMenuItem^ uploadToolStripMenuItem;

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
			this->RowIndex = (gcnew System::Windows::Forms::ColumnHeader());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Tenasferd = (gcnew System::Windows::Forms::ColumnHeader());
			this->Type = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->PBTreansfered = (gcnew System::Windows::Forms::ProgressBar());
			this->Clients = (gcnew System::Windows::Forms::ComboBox());
			this->Port = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IP = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BTNStart = (gcnew System::Windows::Forms::Button());
			this->BTNDonwload = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ServerMode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Theme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Dark = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ligth = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QueueList = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->FileName = (gcnew System::Windows::Forms::ColumnHeader());
			this->FileExtention = (gcnew System::Windows::Forms::ColumnHeader());
			this->Condition = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateTime = (gcnew System::Windows::Forms::ColumnHeader());
			this->QueueType = (gcnew System::Windows::Forms::ColumnHeader());
			this->autodownloadradio = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1->SuspendLayout();
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
			// PBTreansfered
			// 
			this->PBTreansfered->BackColor = System::Drawing::Color::Lime;
			this->PBTreansfered->ForeColor = System::Drawing::Color::Black;
			this->PBTreansfered->Location = System::Drawing::Point(23, 378);
			this->PBTreansfered->Name = L"PBTreansfered";
			this->PBTreansfered->Size = System::Drawing::Size(530, 32);
			this->PBTreansfered->TabIndex = 17;
			// 
			// Clients
			// 
			this->Clients->BackColor = System::Drawing::Color::Lime;
			this->Clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clients->ForeColor = System::Drawing::Color::Black;
			this->Clients->FormattingEnabled = true;
			this->Clients->Location = System::Drawing::Point(351, 43);
			this->Clients->Name = L"Clients";
			this->Clients->Size = System::Drawing::Size(121, 33);
			this->Clients->TabIndex = 16;
			this->Clients->Text = L"Client";
			this->Clients->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Clients_SelectedIndexChanged);
			// 
			// Port
			// 
			this->Port->BackColor = System::Drawing::Color::Lime;
			this->Port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Port->ForeColor = System::Drawing::Color::Black;
			this->Port->Location = System::Drawing::Point(197, 43);
			this->Port->Name = L"Port";
			this->Port->Size = System::Drawing::Size(103, 30);
			this->Port->TabIndex = 15;
			this->Port->Text = L"7071";
			this->Port->TextChanged += gcnew System::EventHandler(this, &MyForm::Port_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(143, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Port";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// IP
			// 
			this->IP->BackColor = System::Drawing::Color::Lime;
			this->IP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IP->ForeColor = System::Drawing::Color::Black;
			this->IP->Location = System::Drawing::Point(43, 43);
			this->IP->Name = L"IP";
			this->IP->Size = System::Drawing::Size(94, 30);
			this->IP->TabIndex = 13;
			this->IP->Text = L"127.0.0.1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(13, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 25);
			this->label1->TabIndex = 12;
			this->label1->Text = L"IP";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// BTNStart
			// 
			this->BTNStart->BackColor = System::Drawing::Color::SpringGreen;
			this->BTNStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNStart->ForeColor = System::Drawing::Color::Black;
			this->BTNStart->Location = System::Drawing::Point(619, 45);
			this->BTNStart->Name = L"BTNStart";
			this->BTNStart->Size = System::Drawing::Size(105, 28);
			this->BTNStart->TabIndex = 10;
			this->BTNStart->Text = L"Start";
			this->BTNStart->UseVisualStyleBackColor = false;
			this->BTNStart->Click += gcnew System::EventHandler(this, &MyForm::BTNStart_Click);
			// 
			// BTNDonwload
			// 
			this->BTNDonwload->BackColor = System::Drawing::Color::SpringGreen;
			this->BTNDonwload->Enabled = false;
			this->BTNDonwload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNDonwload->ForeColor = System::Drawing::Color::Black;
			this->BTNDonwload->Location = System::Drawing::Point(619, 378);
			this->BTNDonwload->Name = L"BTNDonwload";
			this->BTNDonwload->Size = System::Drawing::Size(105, 32);
			this->BTNDonwload->TabIndex = 11;
			this->BTNDonwload->Text = L"Download";
			this->BTNDonwload->UseVisualStyleBackColor = false;
			this->BTNDonwload->Click += gcnew System::EventHandler(this, &MyForm::BTNDonwload_Click);
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
			this->menuStrip1->Size = System::Drawing::Size(754, 28);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ServerMode });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->fileToolStripMenuItem->Text = L"Mode";
			// 
			// ServerMode
			// 
			this->ServerMode->Checked = true;
			this->ServerMode->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ServerMode->Name = L"ServerMode";
			this->ServerMode->Size = System::Drawing::Size(133, 26);
			this->ServerMode->Text = L"Server";
			this->ServerMode->Click += gcnew System::EventHandler(this, &MyForm::ServerMode_Click);
			// 
			// dataModeToolStripMenuItem
			// 
			this->dataModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem1 });
			this->dataModeToolStripMenuItem->Name = L"dataModeToolStripMenuItem";
			this->dataModeToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->dataModeToolStripMenuItem->Text = L"Upload";
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->Checked = true;
			this->fileToolStripMenuItem1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->uploadToolStripMenuItem });
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->fileToolStripMenuItem1->Text = L"File";
			this->fileToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem1_Click);
			// 
			// uploadToolStripMenuItem
			// 
			this->uploadToolStripMenuItem->Name = L"uploadToolStripMenuItem";
			this->uploadToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->uploadToolStripMenuItem->Text = L"Upload";
			this->uploadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::uploadToolStripMenuItem_Click);
			// 
			// Theme
			// 
			this->Theme->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Dark, this->Ligth });
			this->Theme->Name = L"Theme";
			this->Theme->Size = System::Drawing::Size(68, 24);
			this->Theme->Text = L"Theme";
			// 
			// Dark
			// 
			this->Dark->Name = L"Dark";
			this->Dark->Size = System::Drawing::Size(125, 26);
			this->Dark->Text = L"Dark";
			this->Dark->Click += gcnew System::EventHandler(this, &MyForm::Dark_Click);
			// 
			// Ligth
			// 
			this->Ligth->Checked = true;
			this->Ligth->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Ligth->Name = L"Ligth";
			this->Ligth->Size = System::Drawing::Size(125, 26);
			this->Ligth->Text = L"Ligth";
			this->Ligth->Click += gcnew System::EventHandler(this, &MyForm::ligthToolStripMenuItem_Click);
			// 
			// QueueList
			// 
			this->QueueList->BackColor = System::Drawing::Color::LightSteelBlue;
			this->QueueList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->ID, this->FileName,
					this->FileExtention, this->Condition, this->DateTime, this->QueueType
			});
			this->QueueList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QueueList->ForeColor = System::Drawing::Color::Black;
			this->QueueList->HideSelection = false;
			this->QueueList->Location = System::Drawing::Point(23, 84);
			this->QueueList->Name = L"QueueList";
			this->QueueList->Size = System::Drawing::Size(701, 278);
			this->QueueList->TabIndex = 9;
			this->QueueList->UseCompatibleStateImageBehavior = false;
			this->QueueList->View = System::Windows::Forms::View::Details;
			this->QueueList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::QueueList_SelectedIndexChanged);
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			this->ID->Width = 78;
			// 
			// FileName
			// 
			this->FileName->Text = L"Name";
			this->FileName->Width = 100;
			// 
			// FileExtention
			// 
			this->FileExtention->Text = L"Extention";
			this->FileExtention->Width = 92;
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
			this->QueueType->Width = 115;
			// 
			// autodownloadradio
			// 
			this->autodownloadradio->AutoSize = true;
			this->autodownloadradio->BackColor = System::Drawing::Color::WhiteSmoke;
			this->autodownloadradio->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->autodownloadradio->Location = System::Drawing::Point(489, 49);
			this->autodownloadradio->Name = L"autodownloadradio";
			this->autodownloadradio->Size = System::Drawing::Size(124, 21);
			this->autodownloadradio->TabIndex = 19;
			this->autodownloadradio->TabStop = true;
			this->autodownloadradio->Text = L"Auto Download";
			this->autodownloadradio->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(754, 422);
			this->Controls->Add(this->autodownloadradio);
			this->Controls->Add(this->IP);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->QueueList);
			this->Controls->Add(this->BTNDonwload);
			this->Controls->Add(this->PBTreansfered);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BTNStart);
			this->Controls->Add(this->Port);
			this->Controls->Add(this->Clients);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Text = L"Server";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		void AddClient(String^ Username , bool flag)
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
		void ChangeClient(std::string username , bool flag)
		{
			AddClient(gcnew String(username.c_str()) , flag);
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
				auto last = QueueList->Items->Count-1;
				QueueList->Items[last]->Selected=true;

			}
		}
		void NewQueueRow(int Queueid , String^ Name , String^ Extention)
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
			for each (ListViewItem^ var in QueueList->Items)
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
					int queueid = SendFile(path , to_stirng(Clients->SelectedItem->ToString()));
					IsTransfer = true;
					NewQueueRow(queueid , Path::GetFileNameWithoutExtension(ofd->FileName) , Path::GetExtension(ofd->FileName));
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

	Thread^ thread = gcnew Thread(gcnew ThreadStart(this , &MyForm::StartServer));
	thread->Start();
	BTNStart->Enabled = false;
	
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
				StartDownload(queueid);

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
    void ChangeProgress(int queuid , int value)
	{
		   if (this->InvokeRequired)
			   this->Invoke(Event_Progress , queuid , value);
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
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Port_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ligthToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	Dark->Checked = false;
	Ligth->Checked = true;
	//string txt;
	//Message_client_(1041, txt);
	//String^ Text = gcnew String(s2ws(txt).c_str());
	//MessageBox::Show(Text, Text);


	this->BackColor = System::Drawing::Color::White;
	this->PBTreansfered->BackColor = System::Drawing::Color::Lime;
	this->Clients->BackColor = System::Drawing::Color::Lime;
	this->Port->BackColor = System::Drawing::Color::Lime;
	this->label2->BackColor = System::Drawing::Color::White;
	this->IP->BackColor = System::Drawing::Color::Lime;
	this->label1->BackColor = System::Drawing::Color::White;
	this->BTNStart->BackColor = System::Drawing::Color::SpringGreen;
	this->BTNDonwload->BackColor = System::Drawing::Color::SpringGreen;
	this->QueueList->BackColor = System::Drawing::Color::LightSteelBlue;

	
	this->PBTreansfered->ForeColor = System::Drawing::Color::Black;
	this->Clients->ForeColor = System::Drawing::Color::Black;
	this->Port->ForeColor = System::Drawing::Color::Black;
	this->label2->ForeColor = System::Drawing::Color::Black;
	this->IP->ForeColor = System::Drawing::Color::Black;
	this->label1->ForeColor = System::Drawing::Color::Black;
	this->BTNStart->ForeColor = System::Drawing::Color::Black;
	this->BTNDonwload->ForeColor = System::Drawing::Color::Black;
	this->QueueList->ForeColor = System::Drawing::Color::Black;
}
private: System::Void Dark_Click(System::Object^ sender, System::EventArgs^ e) {

	Dark->Checked = true;
	Ligth->Checked = false;
	this->BackColor = System::Drawing::Color::Black;
	this->PBTreansfered->BackColor = System::Drawing::Color::DeepSkyBlue;
	this->Clients->BackColor = System::Drawing::Color::DeepSkyBlue;
	this->Port->BackColor = System::Drawing::Color::DeepSkyBlue;
	this->label2->BackColor = System::Drawing::Color::Black;
	this->IP->BackColor = System::Drawing::Color::DeepSkyBlue;
	this->label1->BackColor = System::Drawing::Color::Black;
	this->BTNStart->BackColor = System::Drawing::Color::Blue;
	this->BTNDonwload->BackColor = System::Drawing::Color::Blue;
	this->QueueList->BackColor = System::Drawing::Color::RoyalBlue;


	this->PBTreansfered->ForeColor = System::Drawing::Color::White;
	this->Clients->ForeColor = System::Drawing::Color::White;
	this->Port->ForeColor = System::Drawing::Color::White;
	this->label2->ForeColor = System::Drawing::Color::White;
	this->IP->ForeColor = System::Drawing::Color::White;
	this->label1->ForeColor = System::Drawing::Color::White;
	this->BTNStart->ForeColor = System::Drawing::Color::White;
	this->BTNDonwload->ForeColor = System::Drawing::Color::White;
	this->QueueList->ForeColor = System::Drawing::Color::White;

	for each (Control ^ ctl in this->Controls)
	{
		Button^ button = gcnew Button();
		if (ctl->GetType() == button->GetType())		
		ctl->BackColor = Color::BlueViolet;
	}
}
private: System::Void fileToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
