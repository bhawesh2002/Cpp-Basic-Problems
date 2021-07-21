/*Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7. Go to the editor
Sample Input
3
14
12
37
Sample Output:
1
1
1
0
*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Program to check multiples of 3 or 7"
         << "(enter any char to exit)"
         << "\nEnter any number:- ";
    int num;
    cin >> num;
    while (num != isalnum(num))
    {
        if (num % 3 == 0)
        {
            cout << num << " is a multiple of 3" << endl;
        }
        else if (num % 7 == 0)
        {
            cout << num << " is a multiple of 7" << endl;
        }
        else
        {
            cout << num << " is not a multiple of 3 or 7" << endl;
        }

        cout << "Program to check multiples of 3 or 7"
             << "(enter any char to exit)"
             << "\nEnter any number:- ";
        cin >> num;
    }
    return 0;
}
