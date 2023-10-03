#include <iostream>
using namespace std;
void myFunction(); //Function Declaraion

// Function Defination
void myFunction() {
    cout << "I Just got executed!" << endl;
}

void myFunction(string fname ){
    cout << fname << " Refsnes\n";
}

void CountryName(string country = "Norway") {
    cout << country << "\n";
}

void Multipara(string fname, int age) {
    cout << fname << " Refsnes. " << age << " Years old. \n";
}
int main()
{
    Multipara("Liam", 14);
    myFunction("nitin"); //Function call
    myFunction("Suraj");
    myFunction();

    CountryName("India");
    CountryName("USA");
    CountryName();
    return 0;
}