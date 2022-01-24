#include<iostream>

using namespace std;

int main()
{
    int divider, dividend, quotient, remainder;
    cout << "Enter the dividend:\t";
    cin >> dividend;

    cout << "\nEnter the divider:\t";
    cin >> divider;

    quotient = dividend / divider;
    remainder = dividend % divider;

    cout << "\nQuotient =\t" << quotient;
    cout << "\nRemainder =\t" << remainder;
}