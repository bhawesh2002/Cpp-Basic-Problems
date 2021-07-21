/*Write a C++ program to create a new string which is n (non-negative integer) copies of a given string. Go to the editor
Sample Input:
"JS", 2
"JS", 3
"JS", 1
Sample Output:
JSJS
JSJSJS
JS*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a string and thenn a number" << endl;
    string test;
    int a;
    cout << "string:- ";
    cin >> test;
    cout << "number:- ";
    cin >> a;
    int i = 0;
    while (i != a)
    {
        cout << test;
        i++;
    }
    return 0;
}