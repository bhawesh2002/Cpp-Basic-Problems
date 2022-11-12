/*Write a program in C++ to enter two angles of a triangle and find the third angle. */

#include <iostream>

using namespace std;

int main()
{
    double angle_a{};
    double angle_b{};
    cout << "Enter the value of Angle A: ";
    cin >> angle_a;
    cout << "Enter the value of Angle B: ";
    cin >> angle_b;
    double angle_c = 180 - (angle_a + angle_b);
    cout << "The third angle is: " << angle_c <<endl;
    return 0;
}