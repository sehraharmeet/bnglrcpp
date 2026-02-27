#include <iostream>
using namespace std;
//int main()
//{
//    auto add = [](auto a, auto b)
//        {
//            return a + b;
//        };
//
//    cout << add(3, 4) << endl;
//    cout << add(2.5, 1.5) << endl;
//}
int main()
{
    auto add = []<typename T>(T a, T b)
    {
        return a + b;
    };

    cout << add(3, 4) << endl;       // int
    cout << add(2.5, 1.5) << endl;   // double
}

