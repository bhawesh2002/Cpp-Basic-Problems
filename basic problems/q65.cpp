/*Write a C++ program to check whether given length of three side form a right triangle*/

#include <iostream>
#include <cmath>
using namespace std;

int right_check(int s1, int s2, int s3)
{
    if ((s1 * s1) + (s2 * s2) == (s3 * s3))
    {
        return 1;
    }
    return 0;
};

int main()
{
    int a, b, c;
    cout << "Enter three sides of triangle:-\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if (right_check(a, b, c) == 1)
    {
        cout << "Given sides will form a right angled triangle." << endl;
    }
    else if (right_check(c, a, b) == 1)
    {
        cout << "Given sides will form a right angled triangle." << endl;
    }
    else if (right_check(b, c, a) == 1)
    {
        cout << "Given sides will form a right angled triangle." << endl;
    }
    else
    {
        cout << "Given sides will not form a right angled triangle." << endl;
    }

    return 0;
}