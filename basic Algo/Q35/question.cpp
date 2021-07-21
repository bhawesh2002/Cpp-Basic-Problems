#include <iostream>

void fill_array(int array[], int size);
void show_array(const int array[], const int size);
void check(const int array[], const int size);
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter Array Size:- ";
    cin >> size;
    int num[size];
    fill_array(num, size);
    show_array(num, size);
    check(num, size);
    return 0;
}

void fill_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "]:- ";
        cin >> array[i];
    }
};

void show_array(const int array[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "]:- " << array[i] << endl;
    }
};

void check(const int array[], const int size)
{
    int increment = 0;
    for (int i = 0, j = 1; i < size, j < size; i++, j++)
    {
        if (array[i] == 5 && array[j] == 5)
        {
            increment++;
            i++;
            j++;
        }else if (array[i] == 5 && array[j] == 6)
        {
            increment++;
            i++;
            j++;
        }
        
    }
    cout << "Number of Pairs = " << increment;
};
