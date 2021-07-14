#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SocketUI {

	/// <summary>
	/// Summary for DownloadUpload
	/// </summary>
	public ref class DownloadUpload : public System::Windows::Forms::UserControl
	{
	public:
		DownloadUpload(void)
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
		~DownloadUpload()
		{
			if (components)
			{
				delete components;
			}
		}

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
			// DownloadUpload
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"DownloadUpload";
			this->Size = System::Drawing::Size(797, 481);
			this->Load += gcnew System::EventHandler(this, &DownloadUpload::DownloadUpload_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DownloadUpload_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
