/*Write a C++ program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.*/

#include <iostream>

const int value = 100;

using namespace std;

int main()
{
    cout << "Enter Two numbbers" << endl;
    int a, b;
    cout << "number 1:- ";
    cin >> a;
    cout << "number 2:- ";
    cin >> b;
    int difference1 = value - a;
    int difference2 = value - b;
    if (difference1 < difference2)
    {
        cout << a << " is nearest to " << value << endl;
    }
    else
    {
        cout << b
         << " is nearest to " << value << endl;
    }
}