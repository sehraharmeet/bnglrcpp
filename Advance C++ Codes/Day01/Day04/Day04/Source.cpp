

#include <iostream>
#include <memory>
using namespace std;

class Employee
{
public:
    int id;

    Employee()
    {
        cout << "Employee Created\n";
    }

    ~Employee()
    {
        cout << "Employee Destroyed\n";
    }
};

int main()
{
    int cnt = 0;
    cout << "Enter total members";
    cin >> cnt;
    //{
    //    auto arr = make_shared<Employee[]>(cnt);

    //    /*arr[0].id = 101;
    //    arr[1].id = 102;
    //    arr[2].id = 103;*/

    //    for (int i = 0; i < cnt; i++)
    //        arr[i].id = cnt+i;

    //    for (int i = 0; i < cnt; i++)
    //        cout << arr[i].id << " ";
    //}
    cout << "FINAL";
    Employee *emp = new Employee[cnt];
    for (int i = 0; i < cnt; i++)
    {
        emp[i].id = cnt+i;
    }
    for (int i = 0; i < cnt; i++)
    {
        cout<<emp[i].id;
    }
    //delete 

}