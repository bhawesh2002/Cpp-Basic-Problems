/*Write a C++ program to read an integer n and prints the factorial of n, assume that n = 10*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}