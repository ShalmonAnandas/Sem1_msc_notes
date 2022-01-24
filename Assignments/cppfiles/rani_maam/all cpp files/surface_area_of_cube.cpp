#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float side, area;
    cout << "Enter edge length: ";
    cin >> side;

    area = 6 * side * side;

    cout << "area = " << area << "\n";
    getch();
}