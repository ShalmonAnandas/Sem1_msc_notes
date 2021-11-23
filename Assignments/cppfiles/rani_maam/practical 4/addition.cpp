// program to add two numbers

#include <iostream>

using namespace std;

//function to add two numbers using parameters and return type
int add(int a, int b)
{
    return a + b;
}

//main function
int main()
{
    int a, b;
    cout << "Enter the two numbers to add: ";
    cin >> a >> b;
    cout << "The sum of the two numbers is: " << add(a, b) << endl;
}