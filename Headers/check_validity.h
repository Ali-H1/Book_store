#include <string>

using std::string;
using std::wstring;
using System::String;

struct validation
{

    static String ^ check_name(wstring name)
    {
        
        if (name.length() > 20)
            return "نام وارد شده باید کمتر از 20 حرف باشد";

        for (wchar_t i : name)
        {
            if ((i < 'A' || i > 'z') || (i < 'a' && i > 'Z'))
                return "نام وارد معتبر نمی باشد";
        }
        return "ok";
    }
    static String^ check_fa_name(wstring name)
    {
        wstring list[33] = {L"آ", L"ا", L"ب", L"پ", L"ت", L"ث", L"ج", L"چ", L"ح", L"خ", L"د", L"ذ", L"ر", L"ز", L"ژ", L"س", L"ش", L"ص", L"ض", L"ط", L"ظ", L"ع", L"غ", L"ف", L"ق",
            L"ک", L"گ", L"ل", L"م", L"ن", L"و", L"ه", L"ی"};
        if (name.length() > 20)
            return L"نام وارد شده باید کمتر از 20 حرف باشد";
        if (name.length() == 0)
            return L"لطفا نام خود را وارد کنید";
        for (wchar_t i : name)
        {
            if (list->find_first_of(i) == -1)
                return L"نام وارد معتبر نمی باشد";
               
        }
        return "ok";
    }

    static String^ check_age(wstring age)
    {
        if (age.length() > 4)
            return L"نام وارد شده باید کمتر از 4 حرف باشد";

        for (wchar_t i : age)
        {
            if ((i < '0' || i > '9'))
                return L"invalid character in age field";
        }
        return "ok";
    }
    static String^ check_postalcode(wstring age)
    {
        if (age.length() !=10)
            return L"کد پستی باید 10 رقم باشد";

        for (wchar_t i : age)
        {
            if ((i < '0' || i > '9'))
                return L"کد پستی باید فقط شامل عدد باشد";
        }
        return "ok";
    }

    static String^ check_email(wstring email)
    {
        String^ error = L"ایمیل وارد شده معتبر نمی باشد";
        int at = -1, dot = -1;
        at = email.find_first_of('@');
        dot = email.find_first_of('.');
        if (at == -1 || dot == -1)
        {
            return error;
        }
        for (wchar_t i : email.substr(0, at - 1))
        {
            if (!((i >= '0' && i <= '9') || (i == '-') || (i == '.') || (i == '_') || (i == '~') || (i == '+') || (i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')))
            {
                return error;
            }
        }
        if (email.substr(email.length() - 4, 4) != L".com")
        {
            return error;
        }
        return "ok";
    }

    static String^ check_password(wstring password)
    {
        bool capital = false, num = false;
        if (password.length() < 8)
            return L"گذرواژه وارد شده باید بیشتر از 8 حرف باشد";

        for (wchar_t i : password)
        {
            if (i > 'A' && i < 'Z')
                capital = true;
            if (i > '0' && i < '9')
                num = true;
        }
        if (!num)
            return L"گذرواژه باید شامل اعداد باشد";
        if (!capital)
            return L"گذرواژه باید شامل حروف بزرگ باشد باشد";

        return "ok";
    }

    static String^ check_password_identical(wstring pass1, wstring pass2)
    {
        if (pass1 == pass2)
            return "ok";
        else
            return L"پسورد وارد شده هماهنگ نیست";
    }
};

