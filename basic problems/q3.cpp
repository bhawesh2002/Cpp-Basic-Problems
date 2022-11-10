/*Write a program in C++ to find Size of fundamental data types.*/

#include <iostream>

using namespace std;

int main()
{
    cout << "size of Integer : " << sizeof(int) << " bytes" << endl;
    cout << "size of Short : " << sizeof(short) << " bytes" << endl;
    cout << "size of Char : " << sizeof(char) << " bytes" << endl;
    cout << "size of Float : " << sizeof(float) << " bytes" << endl;
    cout << "size of Double : " << sizeof(double) << " bytes" << endl;
    cout << "size of Long : " << sizeof(long) << " bytes" << endl;
    cout << "size of Long Long : " << sizeof(long long) << " bytes" << endl;
    return 0;
}