#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace bookstore {

	/// <summary>
	/// Summary for Author_Page
	/// </summary>
	public ref class Author_Page : public System::Windows::Forms::UserControl
	{
	public:
		Author_Page(void)
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
		~Author_Page()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::FlowLayoutPanel^ Author_panel_layout;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Panel^ panel1;

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
			this->Author_panel_layout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Author_panel_layout
			// 
			this->Author_panel_layout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Author_panel_layout->BackColor = System::Drawing::Color::White;
			this->Author_panel_layout->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->Author_panel_layout->Location = System::Drawing::Point(-5, 248);
			this->Author_panel_layout->Name = L"Author_panel_layout";
			this->Author_panel_layout->Size = System::Drawing::Size(1262, 312);
			this->Author_panel_layout->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(552, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"نویسندگان";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::DarkOrange;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1227, 127);
			this->panel1->TabIndex = 3;
			// 
			// Author_Page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->Author_panel_layout);
			this->Controls->Add(this->panel1);
			this->Name = L"Author_Page";
			this->Size = System::Drawing::Size(1227, 818);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
