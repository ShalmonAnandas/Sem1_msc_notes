#include <iostream>
using namespace std;
class Simple
{
    public:
        Simple()
        {
            cout << "Constructor called" << endl;
        }
        ~Simple()
        {
            cout << "Destructor called" << endl;
        }
};
int main()
{
    Simple s;
}
