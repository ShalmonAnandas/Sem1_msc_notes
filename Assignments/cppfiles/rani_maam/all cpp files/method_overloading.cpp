#include <iostream>
using namespace std;
class Addition
{
    public:
        //function to add two numbers
        int add(int a, int b)
        {
            return a+b;
        }
        //function to add three numbers
        int add(int a, int b, int c)
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
    cout<<"Sum of two numbers is: "<<obj.add(a,b)<<endl;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of three numbers is: "<<obj.add(a,b,c)<<endl;
}
