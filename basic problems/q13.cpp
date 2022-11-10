/*Write a program in C++ to swap two numbers*/
#include <iostream>

using namespace std;

int main()
{
    int num1{10};
    int num2{100};
    cout << "Original values\n" << "num1:" << num1 << "\t" << "num2:" << num2 << endl;
    int temp{num1};
    num1 = num2;
    num2 = temp;
    cout << "Swaped values\n" << "num1:" << num1 << "\t" << "num2:" << num2 << endl;
    return 0;
}