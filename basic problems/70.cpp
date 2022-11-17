/*Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cout << "enter a word: ";
    cin >> word;
    char capatialise{};
    for (int i = 0; i < word.length(); i++)
    {
        capatialise =toupper(word[i]);
        word[i] = capatialise;
    }
    cout << word << endl;
    return 0;
}