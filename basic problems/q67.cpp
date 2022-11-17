/*Write a C++ program to which prints the central coordinate and the radius of a circumscribed
circle of a triangle which is created by three points on the plane surface.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the three sides of triangle:-\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    double semi_perimeter = ((a + b + c) / 2);
    double area = sqrt(semi_perimeter * ((semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c)));
    double radius = (a * b * c) / (4 * area);
    cout << "The radius of circumscribed circle is: " << (double)radius << endl;
    return 0;
}