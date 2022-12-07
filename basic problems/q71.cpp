/*Write a C++ program which reads a sequence of integers and prints mode values of the sequence.
The number of integers is greater than or equals to 1 and less than or equals to 100. Go to the editor
Note: The mode of a set of data values is the value that appears most often*/

#include <iostream>

using namespace std;

int main()
{
    int val{};
    cout << "Enter the no of values to be entered: ";
    cin >> val;
    int *nums = new int[val];
    for (int i = 0; i < val; i++)
    {
        cout << i << ": ";
        cin >> nums[i];
    }
    int counter{};
    for (int i = 0; i < val; i++)
    {
        for (int j = i; j < val; j++)
        {
            if (nums[i] == nums[j])
            {
                counter++;
            }
        }
    }

    return 0;
}