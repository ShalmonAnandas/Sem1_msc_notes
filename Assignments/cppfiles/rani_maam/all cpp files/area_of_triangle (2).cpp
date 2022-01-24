// Write a C++ program to create a function named as area and find area of a triangle using no return and no parameter

#include <iostream>

using namespace std;

void area()
{
    int base, height, area_of_triangle;

    cout << "\nEnter base of the triangle : ";      
    cin >> base;
    cout << "\nEnter height of the triangle : ";    
    cin >> height;

    area_of_triangle = 0.5 * base * height;
    cout << "\nArea of the triangle is " << area_of_triangle;
}

int main()
{
    area();
}