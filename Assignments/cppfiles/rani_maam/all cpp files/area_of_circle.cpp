#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float radius, area; //call variables
    cout << "Enter radius: ";   //ask input from user
    cin >> radius;  //give input value to variable

    area = 3.14 * radius * radius;  //calculation

    cout << "area = " << area << "\n";  //output
    getch();
}