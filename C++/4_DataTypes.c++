#include <iostream>
#include <string>
using namespace std;
int main()
{
    int myNum = 5;  // Integer (whole numnber)
    float myFloatNum = 5.99; // Floating point number
    double myDoubleNum =9.98; // Floating point number
    char MyLetter = 'D'; // Character
    bool MyBoolean = true; // Boolean
    string MyText = "Hello"; //String

    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myDoubleNum << endl;
    cout << MyLetter << endl;
    cout << MyBoolean << endl;
    cout << MyText << endl;

    // Numeric Types
    int myNum2 = 1000;
    cout << myNum2 << endl;

    float Myfloat2 = 5.75;
    cout << myNum2 << endl;

    double MyDouble2 = 19.99;
    cout << MyDouble2 << endl;

    float f1 = 35e3;
    double d1 = 12E4;
    cout << d1 << endl;
    cout << f1 <<endl;

    // Booleans Types
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl; //true (1)
    cout << isFishTasty << endl; //false (0)
    
    // The character data types
    char myGrade = 'B';
    cout << myGrade <<endl;

    char a = 65, b = 66, c = 67;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // String Types

    string greeting = "Hello";
    cout << greeting;
    
    return 0;
}