// program to calculate are of triangle using single inheritance

#include <iostream>

using namespace std;

//class to calculate area of circle using public variables
class Radius
{
    public:
        int radius;
        void getRadius()
        {
            cout<<"Enter the radius of circle: ";
            cin>>radius;
        }
};

class Area : public Radius
{
    public:
        void getArea()
        {
            cout<<"Area of circle is: "<<3.14*radius*radius<<endl;
        }
};

int main()
{
    Area a;
    a.getRadius();
    a.getArea();
    return 0;
}