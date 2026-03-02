//#include <iostream>
//#include <type_traits>
//using namespace std;
////C++11
//template<typename T,
//    typename = enable_if_t<is_integral<T>::value>>
//    void show(T value)
//{
//    cout << value << endl;
//}
//
////C++14/17
////void show(T value)
////{
////    static_assert(is_integral_v<T>,
////        "Integer type required");
////}
//
//int main()
//{
//    show(10);
//    show(3.14); // Error
//}
