/*Write a C++ program to read seven numbers and sorts them in descending order*/

#include <iostream>

using namespace std;

int main()
{
    int nums[7] = {};
    cout << "Fill the array with numbers:- " << endl;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        cout << i + 1 << ": ";
        cin >> nums[i];
    }

    for (int i = 0; i < (sizeof(nums) / sizeof(nums[0])) - 1; i++)
    {
        for (int j = i + 1; j < sizeof(nums) / sizeof(nums[0]); j++)
        {
            if (nums[i] < nums[j])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    cout << "sorting in descending order: " << endl;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        cout << nums[i] << "   ";
    }

    return 0;
}