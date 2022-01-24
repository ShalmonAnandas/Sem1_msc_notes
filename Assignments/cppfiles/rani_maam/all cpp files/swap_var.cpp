#include <iostream>

using namespace std;



void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"\nValues have been swapped";
    cout<<" x = "<<x<<" y = "<<y;
}

int main()
{
    int x1,y1;
    cout<<"\nEnter Value of X1 and Y1: ";
    cin>>x1>>y1;
    swap(x1,y1);
    cout<<"\nValue of x1 and y1 after swap are: ";
    cout<<"x1 = "<<x1<<" y1 = "<<y1;
    getchar();
}