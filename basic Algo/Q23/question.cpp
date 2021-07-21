/*Write a C++ program to check if two given non-negative integers have the same last digit. Go to the editor
Sample Input:
123, 456
12, 512
7, 87
12, 45
Sample Output:
0
1
1
0*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Two Numbers" << endl;
    int a, b;
    cout << "number 1:- ";
    cin >> a;
    cout << "number 2:- ";
    cin >> b;
    if (a % 10 == b % 10)
    {
        cout << a << " & " << b << " have the same last digits" << endl;
    }
    else
    {
        cout << "No Match Found" << endl;
    }
    return 0;
}