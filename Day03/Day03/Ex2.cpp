#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b)
{
    cout << a << b;
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    string s1 = "Hello";
    string s2 = "World";

    swapValues(s1, s2);
    cout << s1 << s2;

    int s11 = 20;
    int s22 = 30;
    swapValues(s11, s22);
    cout << s11 << s22;
}
