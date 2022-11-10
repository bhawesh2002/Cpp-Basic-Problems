/*Write a program in C++ to compute quotient and remainder.*/

#include <iostream>

using namespace std;
;

int main()
{
    int dividend{};
    int divisor{};
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    double quotient = dividend/divisor;
    double remainder = dividend % divisor;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder" << remainder << endl;
    return 0;
}