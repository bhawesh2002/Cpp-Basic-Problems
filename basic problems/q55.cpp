/*Write a program in C++ to enter P, T, R and calculate Compound Interest*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double p{};
    double t{};
    double r{};
    cout << "Enter the Principle: ";
    cin >> p;
    cout << "Enter the Rate: ";
    cin >> r;
    cout << "Enter the time period: ";
    cin >> t;
    double total_amount = (p * pow((1 + r / 100), t));
    double compound_intrest = total_amount - p;
    cout << "The compount intrest is: " << compound_intrest << endl;
    cout << "Total amount to be paid is: " << total_amount << endl;
    return 0;
}