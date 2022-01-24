// with return with parameter

#include <iostream>

using namespace std;

int add(int a, int b, int d) // defining the function
{
    int c;
    c = a + b + d;
    return c;
}

int main()
{
    int x;
    x = add(10, 20, 30); // calling the function
    cout << x;
}
