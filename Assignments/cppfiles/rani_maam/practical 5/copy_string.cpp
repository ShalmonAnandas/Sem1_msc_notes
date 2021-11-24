//copy a string into another string using strcpy

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[100];
    char str1[100];
    cout << "Enter a string: ";
    cin >> str;
    strcpy (str1, str);
    cout << "The copied string is: " << str1 << endl;
}