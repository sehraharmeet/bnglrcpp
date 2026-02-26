////#include <iostream>
////using namespace std;
////
////int add(int &a, int b)
////{
////    a = a + 1;
////    b = b + 1;
////    return a + b;
////}
////
////int main()
////{
////    int orig = 100;
////    cout << add(orig, 4);
////    cout << "back in main"<< orig;
////}
//
//
//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//    int addtionalvalue = 2000;
//
//    auto add = [addtionalvalue](int& a, int b)
//        {
//            a = a + 1;
//            b = b + 1;
//            //addtionalvalue = addtionalvalue + 200;
//            return a + b + addtionalvalue;
//        };
//    int orig = 100;
//    cout << add(orig, 4);
//    cout << "back in main" << orig << "--" << addtionalvalue;
//}
