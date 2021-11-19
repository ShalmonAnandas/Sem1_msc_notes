// write a c++ program to compute the sum of even numbers upto specified numbers

#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Numbers to be added: ";
    for (int i=1; i<=num; i++)
    {
        if (i % 2 == 0)
        {   
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << "\nTotal of all numbers is: " << sum;
}