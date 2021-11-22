//write a c++ program to print highest number from 3 entered numbers

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, highest;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b && b > c)
    {
        cout << a << " is the highest number.";
    }
    else if (b > c)
    {
        cout << b << " is the highest number.";
    }
    else
    {
        cout << c << " is the highest number.";
    }
}