#include<iostream>

using namespace std;

int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum, avg;
    cout << "Enter the marks for each subject seperated by <space>";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = sum / 5;

    cout << "\nThe average marks of the student for 5 subjects is: " << avg;
}
