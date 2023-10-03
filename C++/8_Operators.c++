#include <iostream>
using namespace std;
int main()
{
    // Arithmatic Operator
    int x = 50;
    int y = 60;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    cout << ++x << endl;
    cout << --x << endl;

    // Assignment Operator
    // x += 5;
    // x -= 6;
    // x *= 7;
    // x /= 2;
    // x %= 2;
    // x &= 3;
    // cout << x << endl;

    // Comparison Operator
    cout << (x>y) << endl;
    cout << (x<y) << endl;
    cout << (x==y) << endl;
    cout << (x!=y) << endl;
    cout << (x>=y) << endl;
    cout << (x<=y) << endl;

    // Logical Operator
    cout << (x < 5 && y < 5);
    cout << (x > 5 && y > 5);
    cout << (x < 5 && y > 5);

    return 0;
}