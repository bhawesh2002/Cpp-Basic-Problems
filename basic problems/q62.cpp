/*Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size
among twin primes less than or equals to n.According to wikipedia "A twin prime is a prime number that is
either 2 less or 2 more than another prime number" for example, either member of the twin prime pair (41, 43).
In other words, a twin prime is a prime that has a prime gap of two".*/

#include <iostream>
#include <climits>

using namespace std;

bool primeCheck(int num)
{
    bool check = false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " % " << i << "=" << num % i << endl;
            break;
        }
        else
        {
            check = true;
        }
    }
    if (check == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num{};
    cout << "Enter a number: ";
    cin >> num;
    int isPrime = primeCheck(num);
    if (isPrime == 1)
    {
        int next = num + 2;
        int isTwinPrime = primeCheck(num);
        if (isPrime == isTwinPrime)
        {
            cout << "Twin prime of " << num << " is " << next << endl;
        }
        else
        {
            cout << num << " does not have a twin prime." << endl;
        }
    }
    else
    {
        cout << num << " is not a prime number." << endl;
        exit(0);
    }
    return 0;
}