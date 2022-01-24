#include<iostream>

using namespace std;

class Perimeter
{
    private:
        int a, b, c, peri;

    public:
        void perimeter()
        {
            cout << "\n Sides of triangle: ";
            cin >> a >> b >>c;
            peri= a + b + c;
            cout << "\n" << peri;
        }
};

int main()
{
    Perimeter obj;

    obj.perimeter();
}
