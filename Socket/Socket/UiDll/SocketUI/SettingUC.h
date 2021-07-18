#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SocketUI {

	/// <summary>
	/// Summary for SettingUC
	/// </summary>
	public ref class SettingUC : public System::Windows::Forms::UserControl
	{
	public:
		SettingUC(void)
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
		~SettingUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(6, 67);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(644, 335);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &SettingUC::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"نام";
			this->columnHeader1->Width = 51;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"نام خانوادگی";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 79;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"سن";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 41;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"جنس";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 43;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"تاریخ تولد ";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 70;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"ادرس ";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 63;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"کد پستی";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 65;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"پست الکترونیک";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 92;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"نام کاربری";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 82;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"رمز عبور";
			this->columnHeader10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader10->Width = 54;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(505, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"حذف";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button2->Location = System::Drawing::Point(80, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"افزودن";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Lime;
			this->button3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button3->Location = System::Drawing::Point(231, 447);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 31);
			this->button3->TabIndex = 4;
			this->button3->Text = L"مسدود";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button4->Location = System::Drawing::Point(379, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 31);
			this->button4->TabIndex = 5;
			this->button4->Text = L"تغییر";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// SettingUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"SettingUC";
			this->Size = System::Drawing::Size(650, 550);
			this->Load += gcnew System::EventHandler(this, &SettingUC::SettingUC_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void SettingUC_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
