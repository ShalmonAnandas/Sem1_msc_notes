#include <iostream>
using namespace std;
class circle
{
    private:
        float radius;
    public:
        void set_radius(float r)
        {
            radius = r;
        }
        float get_radius()
        {
            return radius;
        }
        float area()
        {
            return 3.14 * radius * radius;
        }
};
int main()
{
    circle c;
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    c.set_radius(r);
    cout << "The area of the circle is: " << c.area() << endl;
}
