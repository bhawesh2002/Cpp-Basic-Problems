/*Write a program in C++ to compute the distance between two points on the surface of earth.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cout << "Enter the latitude of 1st coordinate: ";
    cin >> x1;
    cout << "Enter the longitude of 1st coordinate: ";
    cin >> y1;
    cout << "Enter the latitude of 2nd coordinate: ";
    cin >> x2;
    cout << "Enter the longitude of 2nd coordinate: ";
    cin >> y2;
    double r = 3.14159 / 180;
    x1 = x1 * r;
    y1 = y1 * r;
    x2 = x2 * r;
    y2 = y2 * r;
    double distance = 6371.01 * acos((sin(x1) * sin(x2)) + (cos(x1) * cos(x2) * cos(y1 - y2)));
    cout << "Distance = " << distance << endl;
    return 0;
}