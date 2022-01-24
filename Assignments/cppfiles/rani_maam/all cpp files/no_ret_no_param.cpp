// no return, no parameter

#include <iostream>

using namespace std;

void add()  // function definition
{
    int num1, num2, sum;
    num1 = 10;
    num2 = 20;
    sum = num1 + num2;
    cout << "Sum of the two numbers is " << sum;
}

int main()
{
    add(); // funtion calling
}