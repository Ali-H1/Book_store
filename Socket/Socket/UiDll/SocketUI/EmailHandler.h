#pragma once

using namespace  System::Web;
using namespace  System::Net::Mail;
using System::String;
ref class Email
{
private:
	String^ UserName = "host.h154@gmail.com"; // Insert Valid Email Address !!!
	String^ From = UserName;
	String^ Password = "Aqazwsx123!@"; //Insert Valid Password !!!
public:

	bool send_mail(String^ To, String^ Subject, String^ message)
	{
		MailMessage^ mail = gcnew MailMessage(From, To, Subject, message);
		SmtpClient^ Client = gcnew SmtpClient("smtp.gmail.com");
		Client->Port = 587;
		Client->UseDefaultCredentials = false;
		Client->Credentials = gcnew System::Net::NetworkCredential(UserName, Password);
		Client->EnableSsl = true;
		Client->Send(mail);
		return 1;
	}


};
