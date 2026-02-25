#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int empCode;
    string empName;

public:

    Employee(int code, string name)
    {
        empCode = code;
        empName = name;
    }

    void displayData() const
    {
        cout << "Emp Code: " << empCode
            << ", Emp Name: " << empName << endl;
    }
};

template <class T>
class Stack
{
    T arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(T value)
    {
        arr[++top] = value;
    }

    T pop()
    {
        return arr[top--];
    }
};

int main()
{
    Stack<Employee> empStack;

    Employee e1(101, "Alice");
    Employee e2(102, "Bob");

    empStack.push(e1);
    empStack.push(e2);

    Employee poppedEmp = empStack.pop();
    poppedEmp.displayData();


    return 0;
}