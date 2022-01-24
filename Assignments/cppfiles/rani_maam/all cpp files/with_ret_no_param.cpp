// with return no parameter

#include <iostream>

using namespace std;

int add()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = a + b;
    return c;
}

int main()
{
    int x;
    x = add(); // calling the function
    cout << x;
}