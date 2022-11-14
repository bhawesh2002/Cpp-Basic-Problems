/*Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size
among twin primes less than or equals to n.According to wikipedia "A twin prime is a prime number that is
either 2 less or 2 more than another prime number" for example, either member of the twin prime pair (41, 43).
In other words, a twin prime is a prime that has a prime gap of two".*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int num{};
    cout << "Enter a number: ";
    bool isPrime = false;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
        else
        {
            isPrime = true;
        }
    }
    cout << "isPrime: " << isPrime << endl;
    return 0;
}