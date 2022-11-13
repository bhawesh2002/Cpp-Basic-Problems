/*Write a C++ program to swap first and last digits of any number*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num{};
    cout << "enter a two digit number:" << endl;
    cin >> num;
    int last_digit{};
    int first_digit{};
    last_digit = num % 10;
    int digits = log10(num);
    first_digit = num / pow(10, digits);
    int temp1 = first_digit * pow(10, digits);
    int temp2 = num % temp1;
    num = temp2 / 10;
    int swapped = last_digit * (pow(10, digits)) + (num * 10 + first_digit);
    cout << swapped << endl;
    return 0;
}