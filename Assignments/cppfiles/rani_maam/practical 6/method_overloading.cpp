//add 2 and 3 numbers using method overloading

#include <iostream>

using namespace std;

// class to add two and three numbers
class Addition
{
    public:
        //function to add two numbers
        int add_two(int a, int b)
        {
            return a+b;
        }
        //function to add three numbers
        int add_three(int a, int b, int c)
        {
            return a+b+c;
        }
};

int main()
{
    Addition obj;
    int a, b, c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of two numbers is: "<<obj.add_two(a,b)<<endl;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of three numbers is: "<<obj.add_three(a,b,c)<<endl;
}