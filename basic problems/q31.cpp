/*Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows*/

#include <iostream>

using namespace std;

int main()
{
    int num{};
    int row{};
    int column{};
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i < column; i++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << num;
        }
        cout << endl;
    }

    return 0;
}