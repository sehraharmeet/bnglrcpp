#include <iostream>
#include <string>
using namespace std;

class Student
{
 public:
    string name;
    int age;

    void display()
    {
        cout << name << " - " << age;
    }
};

void bosch_func()
{
     Student students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name: ";
        cin >> students[i].name;

        cout << "Enter age: ";
        cin >> students[i].age;
    }

    cout << "\nStudent Details:\n";

    /*for (int i = 0; i < 5; i++)
    {
        students[i].display();
    }*/
    for (Student tmp : students)
        tmp.display();

}