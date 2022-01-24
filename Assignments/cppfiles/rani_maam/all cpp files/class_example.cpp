// class example

#include <iostream>

using namespace std;

class Addition
{
    private:
        int a, b, c; // variable or data

    public:
        void add()  // function
        {
            a = 20;
            b = 30;
            c = a + b;
            cout <<"\n" << c;
        }
};

int main()
{
    Addition obj;
    // obj.b = 40;
    // cout << "Value of b is " << obj.b;
    obj.add();
}



// write a C++ program to calculate perimeter of a triangle with
// the help of classes and access modifiers
