// function to display employee attributes

#include <iostream>

using namespace std;

//structure to store employee attributes eid, ename, esal
struct employee
{
    int eid;
    char ename[20];
    float esal;
};

//a function to display employee attributes
void display(struct employee e)
{
    cout << "\n\n";
    cout << "Employee ID::" << e.eid << endl;
    cout << "Employee Name::" << e.ename << endl;
    cout << "Employee Salary::" << e.esal << endl;
}

//main functionc
int main()
{
    struct employee e;
    cout << "Enter the employee ID: ";
    cin >> e.eid;
    cout << "Enter the employee name: ";
    cin >> e.ename;
    cout << "Enter the employee salary: ";
    cin >> e.esal;
    display(e);
}