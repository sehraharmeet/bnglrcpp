////#include <iostream>
////#include <type_traits>
////using namespace std;
////
////template<typename T>
////void show(T value)
////{
////    int i = 0;
////    if (is_integral_v<T>)
////        cout << value+10;
////    else
////        cout << value + 20;
////}
////
////int main()
////{
////    show(10);
////    show(3.14);
////    //show(string("Harmeet"));
////}
//
//
//#include <iostream>
//#include <type_traits>
//using namespace std;
//
//template<typename T>
//void process(T value)
//{
//    static_assert(is_integral_v<T>,
//        "Integer type required");
//}
//
//int main()
//{
//    process(10);
//    process(3.14); // Compilation error
//}
