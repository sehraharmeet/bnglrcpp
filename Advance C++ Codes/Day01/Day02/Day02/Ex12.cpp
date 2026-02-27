//#include <iostream>
//#include <functional>
//using namespace std;
//
//int add(int a, int b)
//{
//    cout << a << "--" << b;
//    return a + b;
//}
//
//int main()
//{
//    auto addvar = bind(add, placeholders::_2, 20);
//
//    cout << addvar(10, 30, 40);
//}


#include <iostream>
#include <functional>
using namespace std;

int add(int a, int b)
{
    cout << a << "--" << b << endl;
    return a + b;
}

int main()
{
    function<int(int, int, int)> addvar =
        bind(add, placeholders::_2, 20);

    cout << addvar(10, 30, 40);
}