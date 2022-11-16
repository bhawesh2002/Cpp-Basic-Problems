/*Write a C++ program to add all the numbers from 1 to a given number.*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int modified = num;
    for (int i = 0; i < num; i++)
    {
        modified = modified + i;
    }
    cout << modified << endl;
    return 0;
}