/*Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.
Sample Input:
78, 95
25, 35
40, 50
55, 60
Sample Output:
0
0
1
1*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers" << endl;
    int a, b;
    cout << "number 1:- ";
    cin >> a;
    cout << "number 2:- ";
    cin >> b;
    if (a >= 40 && b <= 50)
    {
        cout << a << " & " << b << " are between the range of 40 - 50" << endl;
    }
    else if (a >= 50 && b <= 60)
    {
        cout << a << " & " << b << " are between the range of 50 - 60" << endl;
    }
    else
    {
        cerr << "Out of Range" << endl;
    }
    return 0;
}