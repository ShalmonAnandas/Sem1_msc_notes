// Write a C++ program to perform perimeter of a triangle and square function named perimeter() using function overloading

#include <iostream>

using namespace std;

void perimeter(int a, int b, int c)
{
    int peri;
    peri = a + b + c;
    cout << "\nPerimeter of triangle is " << peri;
}

void perimeter(int side)
{
    int peri;
    peri = side * 4;
    cout << "\nPerimeter of Square is " << peri;
}

int main()
{
    perimeter(10, 20, 30);
    perimeter(10);
}

