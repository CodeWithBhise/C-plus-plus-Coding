#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string firstname, lastname, fullname;
    cout << "Type your first name: ";
    cin >> firstname; // get user input from the keyboard
    cout << "Type your last name: ";
    cin >> lastname ;
    cout << "Your full name is : " << firstname + lastname << endl;
    getline (cin, fullname);
    cout << "fullname is : " << fullname;
    return 0;
}