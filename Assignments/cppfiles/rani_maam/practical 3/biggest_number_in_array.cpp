// biggest number from array

#include <iostream>

using namespace std;

int main()
{
    int n, i, max;

    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];

    cout << "Enter the numbers for the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    max = array[0];

    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << "The biggest number in the array is " << max << endl;
}