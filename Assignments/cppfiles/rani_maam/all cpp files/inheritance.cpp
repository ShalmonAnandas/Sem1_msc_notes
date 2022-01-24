// Write a C++ program for multiple inheritance

#include <iostream>

using namespace std;

class Stu
{
    public:
    Stu()	// constructor for Stu class
    {
        cout << "\nStudent name is Shalmon Anandas";
    }
};

class Marks
{
    public:
    Marks()	// contructor for Marks class
    {
        cout << "\nMarks gotten are 350/500";
    }
};

class Result: public Stu, public Marks{};

int main()
{
    Result Obj; // calling derived class, constructor gets called automatically
}