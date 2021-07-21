/*Write a C++ program to create a new string made of every other character starting with the first from a given string. Go to the editor
Sample Input:
"Python"
"PHP"
"JS"
Sample Output:
Pto
PP
J*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter a string:- ";
    string text;
    cin >> text;
    for (int i = 0; i < text.length(); i++)
    {
        cout << text[i];
        i++;
    }
    return 0;    
}