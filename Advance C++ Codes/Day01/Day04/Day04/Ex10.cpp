//#include <iostream>
//#include <memory>
//using namespace std;
//
//class Company;
//
//class Employee
//{
//public:
//    weak_ptr<Company> company;  
//
//    void showCompany();
//};
//
//class Company
//{
//public:
//    string name;
//
//    Company(string n) : name(n) {}
//
//    void display()
//    {
//        cout << "Company: " << name << endl;
//    }
//};
//
//void Employee::showCompany()
//{
//    if (auto c = company.lock())  
//    {
//        c->display();
//    }
//    else
//    {
//        cout << "Company no longer exists\n";
//    }
//}
//
//int main()
//{
//    shared_ptr<Company> comp =
//        make_shared<Company>("TechCorp");
//
//    Employee emp;
//    emp.company = comp;
//
//    emp.showCompany();
//}