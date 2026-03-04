////#include <iostream>
////using namespace std;
////int main() {
////    int x = 10;
////    int* ptr1 = &x;
////    cout << *ptr1;
////    int* ptr2 = ptr1;
////}
//
//
////Exclusive ownership, Only one pointer owns the object.
//
//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main() {
//    int x = 10;
//    int* ptr1 = &x;
//    cout << *ptr1;
//    int* ptr2 = ptr1;
//
//    unique_ptr<int> p1 = make_unique<int>(10);
//    cout << *p1;
//    //unique_ptr<int> p2 = p1;//will flag an error
//}
//


//Exclusive ownership, Only one pointer owns the object.

#include <iostream>
#include <memory>
using namespace std;

int main() {
    int x = 10;
    int* ptr1 = &x;
    cout << *ptr1;
    int* ptr2 = ptr1;

    unique_ptr<int> p1 = make_unique<int>(10);
    cout << *p1;
    unique_ptr<int> p2 = move(p1);
}

