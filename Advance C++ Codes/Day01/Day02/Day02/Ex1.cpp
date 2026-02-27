////#include <iostream>
////using namespace std;
////
////int add(int a, int b)
////{
////    return a + b;
////}
////
////int main()
////{
////    int (*fp)(int, int);
////        fp = add;
////
////    cout << fp(3, 4);
////}
//
//#include <iostream>
//using namespace std;
//
//int add(int a, int b) { return a + b; }
//int sub(int a, int b) { return a - b; }
//
//int main()
//{
//    int choice;
//    cout << "1. Add  2. Sub\n";
//    cin >> choice;
//
//    int (*fp)(int, int);
//
//    if (choice == 1)
//        fp = add;
//    else
//        fp = sub;
//
//    cout << fp(10, 5);
//}