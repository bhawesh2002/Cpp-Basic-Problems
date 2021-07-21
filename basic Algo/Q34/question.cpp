/*Write a C++ program to create a new string of the characters at indexes 0,1, 4,5, 8,9 ... from a given string. Go to the editor
Sample Input:
"Python"
"JavaScript"
"HTML"
Sample Output:
Pyon
JaScpt
HT*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test;
    cout << "Enter a word:- ";
    cin >> test;
    int c = 2;
    for (int i = 0; i < test.size(); i++)
    {
        if (i < c)
        {
            cout << test[i];
        }
        else
        {
            i += 1;
            c += 4;
        }
    }
    return 0;
}