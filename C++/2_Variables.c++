#include <iostream>
using namespace std;
int main()
{
    
    cout << "There once was a man named George" << endl;
    cout << "He was 70 years old" << endl;
    cout << "He liked the name John" << endl;
    cout << "But did not like being 35" << endl;
    int myNum = 15;
    cout << myNum <<endl;
    myNum = 10;
    cout << myNum <<endl;
    int mynum2 = 5;
    double myfloatnum = 5.99;
    char myletter = 'D';
    
    string myText = "Hello";
    bool myBoolean = true;
    int myage = 21;
    cout << "I am " << myage << " years old" <<endl;
    // int x = 5;
    // int y = 6;
    // int sum = x + y;
    // cout << sum;

    // Declare multiple variables
    // int x = 5, y = 6, z = 60;
    // cout << x + y + z << endl;

    // one value to multiple variables

    int x,y,z;
    x = y = z = 50;
    cout << x + y + z;

    // constants
    const int myNumA = 15; // myNumA will always be 15
    // myNumA = 10;  // error: assignment of read-only variable

    const int minutePerHour = 60;
    const float PI = 3.14;
    return 0;
}