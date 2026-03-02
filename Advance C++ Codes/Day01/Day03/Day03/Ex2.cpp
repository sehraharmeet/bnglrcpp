//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//    int value;
//
//    Test(int v) : value(v) {}
//
//    Test(const Test&) = delete;            // Copy Constructor
//    Test(Test&&) = default;                 // Move Constructor
//    Test& operator=(const Test&) = default; // Copy Assignment
//    Test& operator=(Test&&) = default;      // Move Assignment
//    ~Test() = default;                      // Destructor
//};
//
//int main()
//{
//    Test t1(10);
//    Test t2 = t1;           // Copy
//    Test t3 = std::move(t1); // Move
//
//    cout << t3.value;
//    cout << t1.value;
//}
