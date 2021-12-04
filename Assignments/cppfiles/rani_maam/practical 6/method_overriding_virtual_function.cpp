#include <iostream>
using namespace std;
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
