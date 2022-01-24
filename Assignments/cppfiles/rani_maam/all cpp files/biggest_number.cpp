// Write a C++ program which prints highest number from entered 3 numbers.

#include <iostream>

using namespace std;

int main()  // function to find biggest number out of 3 numbers
{
    int num1, num2, num3, biggest;

    // ask for user input for 3 numbers
    cout << "\nEnter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num2 > num3)     //checks if num1 is the biggest
    {
        biggest = num1;
        cout << "\nBiggest number out of the three is " << biggest;
    }
    else if (num2 > num3)               //checks if num2 is the biggest
    {
        biggest = num2;
        cout << "\nBiggest number out of the three is " << biggest;
    }
    else                                //checks if num3 is the biggest
    {
        biggest = num3;
        cout << "\nBiggest number out of the three is " << biggest;
    }
}