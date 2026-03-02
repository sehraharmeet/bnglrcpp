////COPY CONST ONLY CODE:
//
//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//    int* data;
//
//    // Parameterized constructor
//    Test(int val)
//    {
//        data = new int(val);
//        cout << "Constructor\n";
//    }
//
//    // Copy Constructor
//    Test(const Test& other)
//    {
//        data = new int(*other.data);
//        cout << "Copy Constructor\n";
//    }
//
//
//
//    // Copy Assignment Operator
//    Test& operator=(const Test& other)
//    {
//        cout << "Copy Assignment\n";
//
//        if (this != &other)
//        {
//            delete data;  // free old
//            data = new int(*other.data);
//        }
//        return *this;
//    }
//
//    // Move Constructor
//    Test(Test&& other)
//    {
//        data = other.data;
//        other.data = nullptr;
//        cout << "Move Constructor\n";
//    }
//    // Move Assignment Operator
//    Test& operator=(Test&& other)
//    {
//        cout << "Move Assignment\n";
//
//        if (this != &other)
//        {
//            delete data;
//            data = other.data;
//            other.data = nullptr;
//        }
//        return *this;
//    }
//
//
//    ~Test()
//    {
//        delete data;
//        cout << "Destructor\n";
//    }
//
//    void disp()
//    {
//        cout << "Address: " << data << endl;
//    }
//};
//
//int main()
//{
//    Test t1(10);
//
//    Test t2 = t1;  // Copy Constructor
//    cout << "after Copy Constructor" << *t2.data << *t1.data << endl;
//    Test t3(40);
//    t2 = t3;   	  // Copy Assignment
//    cout << "after Copy Assignment" << *t2.data << *t3.data << endl;
//    Test t4 = std::move(t1);//move constr
//    cout << "after MOVE Constructor" << *t4.data << endl;
//
//
//    t4 = std::move(t3);//move const
//    cout << "after MOVE Assignment" << *t4.data << endl;
//    return 0;
//}
