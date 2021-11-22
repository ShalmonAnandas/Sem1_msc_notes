// write a program to take sides of triangle as input and determine the type of triangle

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter sides of a triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "It is an Equilateral triangle";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "It is an isoceles triangle";
    }
    else
    {
        cout << "It is a scalar traingle";
    }
}