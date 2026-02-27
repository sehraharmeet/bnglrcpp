#include <iostream>
using namespace std;

int main()
{
    auto sum = [](auto... values)
        {
            int total = 0;
            //((total += values, 0), ...);C++17

            int dummy[] = { (total += values, 0)... };//C++14

            return total;
        };

    cout << sum(1, 2, 3, 4, 5) << endl;
    //cout << sum() << endl;
}

