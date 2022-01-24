#include <iostream>

using namespace std;

// declaring functions
void add(float a, float b);
void sub(float a, float b);


// main function
int main() //num1, num2 are actual parameters
{
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    add(num1, num2);
    sub(num1, num2);
}

// add function
void add(float a, float b)  //a, b are formal parameters
{
    float sum;
    sum = a + b;
    cout << "\nSum = " << sum;
}

// subtract function
void sub(float a, float b)  //a, b are formal parameters
{
    float sub;
    sub = a - b;
    cout <<"\nDiff = " << sub;
}
