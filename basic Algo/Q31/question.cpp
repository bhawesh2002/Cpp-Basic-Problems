/*Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere. Go to the editor
Sample Input:
{1,1,2,3,1}
{1,1,2,4,1}
{1,1,2,1,2,3}
Sample Output:
1
0
1*/

#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int array[size];
    cout << "Enter an array size:- ";
    cin >> size;
    bool check = false;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i <= size; i++)
    {
        if (array[i] == 1 && array[i + 1] == 2 && array[i + 2] == 3)
        {
            check = true;
        }
    }
    if (check)
    {
        cout << "1, 2, 3 appears in array entered by you" << endl;
    }
    else
    {
        cout << "No Match Found" << endl;
    }
}