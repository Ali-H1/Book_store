#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SocketUI {

	/// <summary>
	/// Summary for SeeUC1
	/// </summary>
	public ref class SeeUC1 : public System::Windows::Forms::UserControl
	{
	public:
		SeeUC1(void)
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
		~SeeUC1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(26, 39);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(593, 351);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(276, 423);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ارسال ایمیل ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// SeeUC1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"SeeUC1";
			this->Size = System::Drawing::Size(650, 550);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
