// combine two stings using strcat

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[100];
    char str1[100];
    cout<<"Enter the first string: ";
    cin.getline(str,100);
    cout<<"Enter the second string: ";
    cin.getline(str1,100);
    strcat(str,str1);
    cout<<"The combined string is: "<<str;
}