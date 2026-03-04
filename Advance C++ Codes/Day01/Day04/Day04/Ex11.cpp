// 
////int main()
////{
////    //Conventional C++
////    int* arr = new int[5];
////
////    for (int i = 0; i < 5; i++)
////        arr[i] = i * 10;
////
////    delete[] arr;
////
////    //C++11/14/17
////    /*shared_ptr<int[]> arr(new int[5]);
////
////    for (int i = 0; i < 5; i++)
////        arr[i] = i * 10;*/
////
////        //C++20
////        /*auto arr = make_shared<int[]>(5);
////
////        for (int i = 0; i < 5; i++)
////            arr[i] = i * 10;
////
////        for (int i = 0; i < 5; i++)
////            cout << arr[i] << " ";*/
////}
//
//
//#include <iostream>
//#include <memory>
//using namespace std;
//
//class Employee
//{
//public:
//    int id;
//
//    Employee()
//    {
//        cout << "Employee Created\n";
//    }
//
//    ~Employee()
//    {
//        cout << "Employee Destroyed\n";
//    }
//};
//
//int main()
//{
//    auto arr = make_shared<Employee[]>(3);
//
//    arr[0].id = 101;
//    arr[1].id = 102;
//    arr[2].id = 103;
//
//    for (int i = 0; i < 3; i++)
//        cout << arr[i].id << " ";
//  /*  Employee *emp = new Employee[5];
//    for (int i = 0; i < 5; i++)
//    {
//        emp[i].id = 101;
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        cout<<emp[i].id;
//    }*/
//
//}