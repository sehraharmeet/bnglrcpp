#include <iostream>
using namespace std;

int main()
{
    auto countArgs = [](auto... args)
        {
            cout << sizeof...(args) << endl;
        };

    countArgs(1, 2, 3);          // 3
    countArgs("Hi", 5.5);        // 2
}
