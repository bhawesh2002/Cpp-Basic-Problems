/*Write a program in C++ to check the upper and lower limits of integer.*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cout << "Upper limit of INTEGER: "<< INT_MAX << " bits" << endl;
    cout << "Upper limit of SHORT: "<< SHRT_MAX << " bits" << endl;
    cout << "Upper limit of CHAR: "<< CHAR_MAX << " bits" << endl;
    cout << "Upper limit of LONG: "<< LONG_MAX << " bits" << endl;
    cout << "Upper limit of LONG LONG: "<< LLONG_MAX << " bits" << endl;
    cout << "Lower limit of INTEGER: "<< INT_MIN << " bits" << endl;
    cout << "Lower limit of SHORT: "<< SHRT_MIN << " bits" << endl;
    cout << "Lower limit of CHAR: "<< CHAR_MIN << " bits" << endl;
    cout << "Lower limit of LONG: "<< LONG_MIN << " bits" << endl;
    cout << "Lower limit of LONG LONG: "<< LLONG_MIN << " bits" << endl;
    return 0;
}