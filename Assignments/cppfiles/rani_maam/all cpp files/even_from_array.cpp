// write a program to display even numbers from a given array

#include <iostream>

using namespace std;

int main()
{
    // ask user to input an array
    int array[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    // print even numbers
    cout << "Even numbers: ";
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }
}
