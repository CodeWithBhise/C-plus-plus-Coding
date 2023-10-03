#include <iostream>
using namespace std;
int main()
{
    // Strings
    string greeting = "Hello";
    cout << greeting << endl;
    string lastname = "Bhise";
    string firstname = "Suraj";

    string fullname = firstname + " " + lastname;
    cout << fullname << endl;
    string fullName = firstname.append(lastname);
    cout << fullName << endl;

    // Numbers and string
    int a = 10;
    int b = 10;
    int c = a + b;
    cout << c << endl;

    string StrNum1 = "10";
    string StrNum2 = "10";
    string StrNum3 = StrNum1 + StrNum2;
    cout << StrNum3 << endl;

    string m = "10";
    int o = 10;

    // string d = m + o;
    //   cout << d << endl; // we can't deo this we cant add a string and number

    string txt = "hi my name is  suraj bhise";
    cout << txt.length() << endl;

    // Similarly length we can use size() both are same

    cout << txt.size() << endl;

    // Accessing string
    cout  << txt[0] << endl;
    cout  << txt[7] << endl;

    // Changing Characters
    string MyString = "Hello";
    MyString[0] = 'j';
    cout << MyString << endl;
    return 0;
}