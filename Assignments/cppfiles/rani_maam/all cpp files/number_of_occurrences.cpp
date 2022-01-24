#include <iostream>
using namespace std;
int main()
{
    int n, i, query, count = 0;
    cout << "Enter size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the numbers for the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the number to be searched within the array: ";
    cin >> query;
    for (i = 0; i < n; i++)
    {
        if (array[i] == query)
        {
            count++;
        }
    }
    cout << "The number of occurrences of " << query << " in the array is " << count << endl;
}
