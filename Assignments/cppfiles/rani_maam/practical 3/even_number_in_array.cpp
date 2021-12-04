#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter numbers in the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "The even numbers in the array are: ";
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }
}
