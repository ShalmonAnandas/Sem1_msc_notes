#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is your age? :";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote!";
    }
    else if (age < 18 && age > 13)
    {

        cout << "You are teenager";
    }
    else
    {
        cout << "Welcome to juvenile home";
    }
}
