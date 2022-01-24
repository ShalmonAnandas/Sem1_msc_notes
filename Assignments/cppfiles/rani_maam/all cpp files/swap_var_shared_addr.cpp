#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x1,y1;
    cout<<"\nEnter Value of X1 and Y1: ";
    cin>>x1>>y1;
    swap(x1,y1);
    cout<<"\nValue of x1 and y1 after swap are: ";
    cout<<"\nx1 = "<<x1<<"\ty1 = "<<y1;
}