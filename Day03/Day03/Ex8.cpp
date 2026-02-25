#include <iostream>
#include <list>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    double marks;

    Student(int r, string n, double m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Roll No: " << rollNo
            << ", Name: " << name
            << ", Marks: " << marks << endl;
    }
};

int main()
{
    list<Student> students;

    students.push_back(Student(1, "Harmeet", 88.5));
    students.push_front(Student(33, "Reema", 33.5));
    students.push_back(Student(2, "Aman", 92.0));
    students.push_back(Student(3, "Riya", 76.4));

    for (Student s : students)
    {
        s.display();
    }

    return 0;
}
