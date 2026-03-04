//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main() {
//    int x = 10;
//    int* ptr1 = &x;
//    cout << *ptr1;
//
//
//    int* ptr2 = ptr1;
//
//    shared_ptr<int> p1 = make_shared<int>(10);
//    cout << *p1;
//    shared_ptr<int> p2 = p1;
//}


#include <iostream>
#include <memory>
using namespace std;

int main() {
    int x = 10;
    int* ptr1 = &x;
    cout << *ptr1;


    int* ptr2 = ptr1;

    shared_ptr<int> p1 = make_shared<int>(10);
    cout << *p1;
    shared_ptr<int> p2 = p1;
    shared_ptr<int> p3 = p1;
    cout << "=>" << p1.use_count() << endl;  // 2

}
