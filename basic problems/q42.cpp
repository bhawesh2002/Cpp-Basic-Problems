/*Write a language program in C++ which accepts the user's first and last name
and print them in reverse order with a space between them*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string first_name{};
    string last_name{};
    cout << "Enter your first name: ";
    cin >>first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Reversing ordder of the name: " << last_name << " "<< first_name;
    return 0;
}
