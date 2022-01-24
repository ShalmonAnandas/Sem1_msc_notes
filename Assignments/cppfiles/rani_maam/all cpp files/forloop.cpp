#include <iostream>

using namespace std;

int main()
{
    int num, n, big, i;
    big = 0;
    cout << "\nEnter how many numbers: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cout << "\n Enter Number "<<i<<":";
        cin >> num;
        if(num > big)
            big = num;
    }
    cout <<"\nBig No=" << big;
}

