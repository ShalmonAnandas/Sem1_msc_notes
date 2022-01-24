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
        cout << "It is a scalene traingle";
    }
}
