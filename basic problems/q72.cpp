/*Write a C++ program to which reads n digits chosen from 0 to 9 and counts the number of
combinations where the sum of the digits equals to given number. Do not use the same digits in a combination.
For example, the combinations where n = 2 and s = 5 are as follows:
0 + 5 = 5
1 + 4 = 5
3 + 2 = 5*/

#include <iostream>

using namespace std;

int main()
{
    int c, sum;
    cout << "Enter no of combinations:-\nc: ";
    cin >> c;
    cout << "Enter the sum: ";
    cin >> sum;
    int combinations{};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int s = i + j;
            if (s == sum)
            {
                cout << i << " + " << j << " = " << s << endl;
                combinations++;
            };
        }
    }
    cout << "No of combinations: " << combinations / 2 << endl;
    return 0;
}