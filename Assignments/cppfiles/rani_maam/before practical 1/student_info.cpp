// Write a C++ program to Read and Print Student Information using simple class.

#include <iostream>

using namespace std;

class Student
{
    private:
    string name;
    int sub1, sub2, sub3, sub4, sub5, reg_no;
    float total, percentage;

    public:
    void read()
    {
        cout << "\nEnter name of the student : ";
        cin >> name;
        cout << "\nEnter Registration Number of the student : ";
        cin >> reg_no;
        cout << "\nEnter marks of the student for 5 subjects [seperated by <space>] : ";
        cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    }

    void total_percentage()
    {
        total = sub1+sub2+sub3+sub4+sub5;
        percentage = total / 500 * 100;
    }

    void print_info()
    {
        cout << "\nStudent Name         : " << name;
        cout << "\nRegistration Number  : " << reg_no;
        cout << "\n================================";
        cout << "\nMarks in subject 1   : " << sub1 << "/100";
        cout << "\nMarks in subject 2   : " << sub2 << "/100";
        cout << "\nMarks in subject 3   : " << sub3 << "/100";
        cout << "\nMarks in subject 4   : " << sub4 << "/100";
        cout << "\nMarks in subject 5   : " << sub5 << "/100";
        cout << "\n--------------------------------";
        cout << "\nTotal Marks          : " << total << "/500";
        cout << "\nPercentage           : " << percentage << "%";
    }
};

int main()
{
    class Student stu;

    stu.read();
    stu.total_percentage();
    stu.print_info();
}