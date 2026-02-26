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
////    cout << add(3, 4);
////}
////#include <iostream>
////using namespace std;
////
////class Add
////{
////public:
////    int operator()(int a, int b)
////    {
////        return a + b;
////    }
////};
////
////int main()
////{
////    Add add;
////
////    cout << add(3, 4);
////}
//
//
////#include <iostream>
////using namespace std;
////
////int main()
////{
////    auto add = [](int a, int b)
////        {
////            return a + b;
////        };
////
////    cout << add(3, 4);
////}
//
////
////#include <iostream>
////using namespace std;
////class Bosch {
////public:
////    void facto()
////    {
////        auto factorial = [](int n)
////            {
////                int result = 1;
////                for (int i = 1; i <= n; i++)
////                    result *= i;
////                return result;
////            };
////
////        cout << factorial(5);  // 120
////    }
////};
////int main()
////{
////    Bosch b;
////    b.facto();
////}
//
//#include <iostream>
//#include <functional>
//using namespace std;
//
//int add(int a, int b)
//{
//    return a + b;
//}
//
//class Multiply
//{
//public:
//    int operator()(int a, int b)
//    {
//        return a * b;
//    }
//};
//
//int main()
//{
//    function<int(int, int)> f;
//
//    f = add;                
//    cout << f(3, 4) << endl;
//
//    f = [](int a, int b) { return a + b; };  
//    cout << f(5, 6) << endl;
//
//    Multiply m;
//    f = m;                  
//    cout << f(2, 3);
//}
//
