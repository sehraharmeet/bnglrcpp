#include <iostream>
#include <memory>
using namespace std;

int main()
{
    auto arr = make_shared<int[]>(5);   // array of 5 ints

    for (int i = 0; i < 5; i++)
        arr[i] = i * 10;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
