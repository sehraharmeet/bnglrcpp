#include <iostream>
using namespace std;

void process(int a, int b, int (*op)(int, int))
{
    cout << op(a, b) << endl;
}

int main()
{
    int re = 0;
    process(5, 3, [re](int x, int y)
        {
            return x - y + re;
        });
}
