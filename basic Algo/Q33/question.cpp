/*Create a new string from a given string where a specified character have been removed except starting and ending position of the given string. Go to the editor
Sample Input:
"xxHxix", "x"
"abxdddca", "a"
"xabjbhtrb", "b"
Sample Output:
xHix
abxdddca
xajhtrb*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string test;
    cout << "Enter a string:- ";
    cin >> test;
    char a;
    cout << "Enter a char to remove from string:- ";
    cin >> a;
    for (int i = 0; i < test.length(); i++)
    {
        if (test[i] == a)
        {
            test.erase(test.begin() + i);
        }
    }
    cout << test << endl;
    return 0;
}