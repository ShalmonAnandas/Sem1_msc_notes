// no return with parameter

#include <iostream>

using namespace std;

void add(int a, int b) // defining the function
{
    int c;
    c = a + b;
    cout << c;
}

int main()
{
    add(10, 20); // calling the function
}