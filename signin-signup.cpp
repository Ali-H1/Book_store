#include "signin-signup.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main2(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    bookstore::signinsignup form;
    Application::Run(% form);
}