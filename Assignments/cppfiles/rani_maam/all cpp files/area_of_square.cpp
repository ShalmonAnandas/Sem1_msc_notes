#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float side, area;
    cout << "Enter length of side: ";
    cin >> side;

    area = side * side;

    cout << "area = " << area << "\n";
    getch();
}