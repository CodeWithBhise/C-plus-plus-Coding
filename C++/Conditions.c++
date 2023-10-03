#include <iostream>
using namespace std;
int main()
{
    // if (20 > 18)
    // {
    //     cout << "20 is greater than 18";
    // }
    // int x = 20;
    // int y = 188;

    // if (x > y)
    // {
    //     cout << "x is greater than y" <<endl;
    // }
    // else {
    //     cout << "y is greater than x" <<endl;
    // }
    
    // if (x == 10)
    // {
    //     cout << "X is equal to 10";
    // }else if(x == 15){
    //     cout <<  "x is equal to 15";
    // }else{
    //     cout << "X is not equal";
    // }

    int time = 20;
    if (time < 18){
        cout << "Good day" << endl;
    }else{
        cout << "Good eveining" << endl;
    }
    
    string result = (time < 18) ? "Good day" : "good evening";
    cout << result;    
    return 0;
}