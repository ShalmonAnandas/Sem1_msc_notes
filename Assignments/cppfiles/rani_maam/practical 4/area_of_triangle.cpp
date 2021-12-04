#include <iostream>
using namespace std;
//function to calculate area of traingle using no return and no parameters
void area_of_triangle()
{
    float base, height;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "The area of the triangle is: " << (base * height) / 2 << endl;
}
//main function
int main()
{
    area_of_triangle();
}
