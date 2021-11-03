// Write a c++ program to demonstrate virtual function.

#include <iostream>

using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout << "\nThis is the base class";
    }
};

class Derived:public Base
{
    public:
    void print()
    {
        cout << "\nThis is the derived class";
    }
};

int main()          // main function
{
    Base objB;      // Base class called as object objB
    Base* bptr;     // pointer of Base class called as object bptr
    Derived objD;   // Derived class called as object objD
    
    bptr = &objD;   // Address of Derived class assigned to object bptr

    objB.print();   // prints virtual function before runtime redefining
    bptr -> print();// prints virtual function after runtime redefining
}