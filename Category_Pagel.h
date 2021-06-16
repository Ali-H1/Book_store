﻿#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for Category_Pagel
	/// </summary>
	public ref class Category_Pagel : public System::Windows::Forms::UserControl
	{
	public:
		Category_Pagel(void)
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
		~Category_Pagel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::FlowLayoutPanel^ category_panel_layout;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->category_panel_layout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::DarkOrange;
			this->panel1->Location = System::Drawing::Point(272, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(605, 118);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(213, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"دسته بندی ها";
			// 
			// category_panel_layout
			// 
			this->category_panel_layout->Location = System::Drawing::Point(16, 180);
			this->category_panel_layout->Name = L"category_panel_layout";
			this->category_panel_layout->Size = System::Drawing::Size(1147, 312);
			this->category_panel_layout->TabIndex = 2;
			// 
			// Category_Pagel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->category_panel_layout);
			this->Controls->Add(this->panel1);
			this->Name = L"Category_Pagel";
			this->Size = System::Drawing::Size(1177, 818);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
