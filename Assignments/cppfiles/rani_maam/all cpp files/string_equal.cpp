#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    int result;
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    result = strcmp(str1, str2);
    switch(result)
    {
        case 0:
            cout << "Strings are equal";
            break;
        case 1:
            cout << "Strings are not equal";
            break;
    }
}
