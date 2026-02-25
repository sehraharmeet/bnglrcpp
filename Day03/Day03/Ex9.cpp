#include <iostream>
#include <map>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    double marks;

    Student() {}

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
    /*auto x = "Bosch";
    cout << typeid(x).name();*/

    map<int, Student> students;

    students[1] = Student(1, "Harmeet", 88.5);
    students[2] = Student(2, "Aman", 92.0);
    students[3] = Student(3, "Riya", 76.4);

    for (auto p : students)
    {
        //cout << typeid(p).name();
        cout << p.first;    // first is referring to the key
        //p.second.display();//second is referrring to the value(student object)
    }

    return 0;
}
