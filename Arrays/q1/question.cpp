/* Write a C++ program to find the largest element of a given array of integers.*/

#include <iostream>
#include <cctype>

void sort_array(const double *array, int size);
void show_array();

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of entries: ";
    cin >> size;
    double numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "\t";
        cin >> numbers[i];
    }
}

void sort_array(const double *array, int size) {
    int opt;
    cout << "Sort Array Values as :  1) Ascending\t2)Descending" << endl;
    cout << "Enter your choice";
    cin >> opt;
    switch (opt)
    {
    case 1:{
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size; j++)
            {
                if (array[i] > array [j])
                {
                    
                }
                
            }
            
        }
        
    }break;
    
    default:
        break;
    }
    
}