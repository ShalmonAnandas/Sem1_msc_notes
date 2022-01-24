#include <iostream>
using namespace std;
class Student
{
    private:
        char name[50];
        int id;
    public:
        int student()
        {
            cout<<"Enter student name: ";
            cin.getline(name,50);
            cout<<"Enter student id: ";
            cin>>id;
        }
        void display_student()
        {
            cout<<"\n\nStudent name: "<<name<<endl;
            cout<<"Student id: "<<id;
        }
};
class Marks : public Student
{
    private:
        int marks[5];
        int total;
        float avg;

    public:
        int student_marks()
        {
            for(int i=0; i<5; i++)
            {
                cout<<"Enter marks of subject "<<i+1<<": ";
                cin>>marks[i];
            }
            total=0;
            for(int i=0; i<5; i++)
            {
                total=total+marks[i];
            }
            avg=total/5;
        }
        void display_student_marks()
        {
            cout<<"\nMarks: ";
            for(int i=0; i<5; i++)
            {
                cout<<marks[i]<<" ";
            }
            cout<<"\nTotal: "<<total;
            cout<<"\nAverage: "<<avg;
        }
};
class Course : public Marks
{
    private:
        char course[50];
        char branch[50];
        int year;

    public:
        int student_course()
        {
            cout<<"Enter course name: ";
            cin>>course;
            cout<<"Enter branch name: ";
            cin>>branch;
            cout<<"Enter year: ";
            cin>>year;
            return 0;
        }
        void display_student_course()
        {
            cout<<"\nCourse name: "<<course;
            cout<<"\nBranch name: "<<branch;
            cout<<"\nYear: "<<year;
        }
};
int main()
{
    Course c;
    c.student();
    c.student_marks();
    c.student_course();
    c.display_student();
    c.display_student_marks();
    c.display_student_course();
}


