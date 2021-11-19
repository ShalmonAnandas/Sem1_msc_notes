//write a c++ program that takes an input and print its multiplication upto 10

#include <iostream>

using namespace std;

int main()
{
    int num, mul;
    cout << "Enter a number: ";
    cin >> num;

    for (int i=1; i<=10; i++)
    {
        mul = num * i;
        cout << num << " x " << i << " = " << mul << endl;
    }
}