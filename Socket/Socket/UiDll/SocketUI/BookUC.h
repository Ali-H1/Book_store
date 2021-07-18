#pragma once
#include"BookAddUC.h"
#include "BookRemoveUC.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SocketUI {

	/// <summary>
	/// Summary for BookUC
	/// </summary>
	public ref class BookUC : public System::Windows::Forms::UserControl
	{
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
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Lime;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton1->Location = System::Drawing::Point(290, 13);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 28);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"تغییر";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &BookUC::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Lime;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton2->Location = System::Drawing::Point(108, 13);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(55, 28);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"حذف";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &BookUC::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Lime;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->radioButton3->Location = System::Drawing::Point(464, 13);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 28);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"اضافه کردن";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &BookUC::radioButton3_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(3, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 500);
			this->panel1->TabIndex = 0;
			// 
			// BookUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->panel1);
			this->Name = L"BookUC";
			this->Size = System::Drawing::Size(650, 550);
			this->Load += gcnew System::EventHandler(this, &BookUC::BookUC_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	panel1->Controls->Clear();
	BookRemoveUC^ Uc1 = gcnew BookRemoveUC();
	panel1->Controls->Add(Uc1);
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	panel1->Controls->Clear();
	BookRemoveUC^ Uc2 = gcnew BookRemoveUC();
	panel1->Controls->Add(Uc2);
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	panel1->Controls->Clear();
	BookAddUC^ Uc = gcnew BookAddUC();
	panel1->Controls->Add(Uc);
}
private: System::Void BookUC_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
