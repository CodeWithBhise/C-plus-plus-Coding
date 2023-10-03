#include <iostream>
using namespace std;
int main()
{
    // struct
    // {
    //     int mynum;
    //     string myString;
    // } myStructure;

    // Assign values to members of myStructure
    // myStructure.mynum = 1;
    // myStructure.myString = "Hello World!";

    // Print values to members of myStructure
    // cout << myStructure.mynum << "\n";
    // cout << myStructure.myString << "\n";

    // One Structure in multiple VAriables
    // struct
    // {
    //     int myNum;
    //     string myString;
    // } myStruct1, myStruct2, myStruct3; // Multiple structure seperated by commas

    // structr1, myCar2; // We can add variables by seperating them with commas

    // Put data into the first structre
    // myCar1.brand = "BMW";
    // myCar1.model = "X5";
    // myCar1.year = 1999;

    // Put data into second structure
    // myCar2.brand = "Ford";
    // myCar2.model = "X5";
    // myCar2.year = 1969;

    // print the structure members
    // cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;

    // cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

    // Named Structures
   // struct myDataType { // This structure is named "myDataType"
    //     int myNum;
    //     string myString;
    // };

    // Declare a structure named "car"
    struct car
    {
        string brand;
        string model;
        int year;
    };
    
    
        // Create a car structure and store it in myCar1;
        car myCar1;
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1969;

        // Print the structure and store it in myCar2;

        car myCar2;
        myCar2.brand = "Mustang";
        myCar2.year = 1969;
        myCar2.model = "Ford";

        // Print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";

        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}