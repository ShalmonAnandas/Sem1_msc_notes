// Write a C++ program to create a function named as area and find area of a triangle using no return and no parameter

#include <iostream>
#include <math.h>

using namespace std;

void area_basic_formula()
{
    int base, height, area_of_triangle;

    cout << "\nEnter base of the triangle : ";
    cin >> base;
    cout << "\nEnter height of the triangle : ";
    cin >> height;

    area_of_triangle = 0.5 * base * height;
    cout << "\nArea of the triangle is " << area_of_triangle;
}

void heron_formula()
{
    int a, b, c, s, area_of_triangle, formula;

    cout << "\nEnter 3 sides of the triangle : ";
    cin >> a >> b >> c;

    s =  a + b + c;
    formula = s*(s-a)*(s-b)*(s-c);
    
    area_of_triangle = sqrt(formula);
    cout << "\nArea of the triangle is " << area_of_triangle;
}

int main()
{
    int type_of_formula;
    cout << "\nDo you want to find area using : ";
    cout << "\n[1] Base & height";
    cout << "\n[2] Sides" << endl;
    cin >> type_of_formula;

    if (type_of_formula == 1)
    {        
        area_basic_formula();
    }
    else
    {
        heron_formula();
    }
}