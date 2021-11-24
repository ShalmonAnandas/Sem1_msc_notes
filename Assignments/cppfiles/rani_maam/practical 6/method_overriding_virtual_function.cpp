// program to demonstrate function overriding and virtual function

#include <iostream>

using namespace std;

// base class
class Base
{
    public:
        virtual void print()
        {
            cout << "print base class on compile" << endl;
        }
        void display()
        {
            cout << "display base class on compile" << endl;
        }
};

class Derived : public Base
{
    public:
        void print()
        {
            cout << "print derived class on runtime" << endl;
        }
        void display()
        {
            cout << "display derived class on runtime" << endl;
        }
};

int main()
{
    Base* bptr;
    Derived d;
    bptr = &d;

    bptr->display();
    bptr->print();
}
