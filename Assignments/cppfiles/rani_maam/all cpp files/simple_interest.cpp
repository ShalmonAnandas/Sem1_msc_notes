#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float princ, rate, time, SI;
    cout << "Enter principle: ";
    cin >> princ;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;

    SI = princ * rate * time / 100;

    cout << "Simple Interest = " << SI << "\n";
    getch();
}