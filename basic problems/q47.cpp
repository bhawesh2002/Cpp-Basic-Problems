/*Write a program in C++ to calculate the sum of all even and odd numbers in an array*/

#include <iostream>

using namespace std;

int main()
{
    int num[6] = {};
    cout << "Fill the array: ";
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cin >> num[i];
    }
    int even_sum{};
    int odd_sum{};
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        if (num[i] % 2 == 0)
        {
            even_sum += num[i];
        }
        else
        {
            odd_sum += num[i];
        }
    }
    cout << "Sum of even's: " << even_sum << endl;
    cout << "Sum of odd's: " << odd_sum << endl;

    return 0;
}