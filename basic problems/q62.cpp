/*Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size
among twin primes less than or equals to n.According to wikipedia "A twin prime is a prime number that is
either 2 less or 2 more than another prime number" for example, either member of the twin prime pair (41, 43).
In other words, a twin prime is a prime that has a prime gap of two".*/

#include <iostream>

using namespace std;

int primeCheck(int num) // function to check weather number is prime or not
{
    int check = true;             // set default value to true
    for (int i = 2; i < num; i++) // run a loop
    {
        if (num % i == 0) // check weather num is completely divisible by i
        {
            check = false; // set value to false
            break;         // break the loop
        }
    }
    if (check == true) // if default value is not changed number is prime and return 1
    {
        return 1;
    }
    return 0; // return 0 is value of check is false
}

int main()
{
    int num{};
    cout << "Enter a number: ";
    cin >> num;
    int isPrime = primeCheck(num); // check weather num entered is prime or not
    if (isPrime == 1)              // if yes
    {
        int next = num + 2;                 // add two to the prime number
        int isTwinPrime = primeCheck(next); // check weather the new number is prime or not
        if (isPrime == isTwinPrime)         // if yes
        {
            cout << "Twin prime of " << num << " is " << next << endl; // the number is twin prime
        }
        else // if no
        {
            cout << num << " does not have a twin prime." << endl; // number is not a twin prime
        }
    }
    else // if no
    {
        cout << num << " is not a prime number." << endl; // exit the program
    }
    return 0;
}