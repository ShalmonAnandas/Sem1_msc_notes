#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float height, base, area;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter base: ";
    cin >> base;

    area = height * base / 2;

    cout << "area = " << area << "\n";
    getch();
}