#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int num1, num2, sum, avg;
    cout << "Enter two number: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    avg = sum / 2;

    cout << "sum = " << sum << "\n";
    cout << "average = " << avg << "\n";
    getch();
}