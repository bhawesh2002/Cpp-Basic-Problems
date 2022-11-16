/*Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2, sum;
    cout << "Enter two numbers:-\nnum1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    int digits{0};
    while (sum != 0)
    {
        sum = sum / 10;
        digits++;
    }
    cout << "No of digits in the sum: " << digits << endl;
    return 0;
}