#pragma once
#include "signin.h"
#include "signup.h"
namespace bookstore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for signinsignup
	/// </summary>
	public ref class signinsignup : public System::Windows::Forms::Form
	{
	public:
		signin^ page = gcnew signin();
		signinsignup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//panel1->Controls->Add(page);
			//this->Controls->Add(page);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signinsignup()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// signinsignup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 446);
			this->Name = L"signinsignup";
			this->Text = L"signinsignup";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
