/*Write a C++ program which prints three highest numbers from a list of numbers in descending order*/

#include <iostream>

using namespace std;

int main()
{
    int value;
    cout << "Enter the no of values you want to input: ";
    cin >> value;
    int *nums = new int[value];
    for (int i = 0; i < value; i++)
    {
        cout << "nums[" << i << "] = ";
        cin >> nums[i];
    };
    for (int i = 0; i < value - 1; i++)
    {
        for (int j = i + 1; j < value; j++)
        {
            if (nums[i] < nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout << "The three largest numbers are: ";
    for (int i = 0; i < 3; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
    return 0;
}