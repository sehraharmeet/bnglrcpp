#include <iostream>
using namespace std;

template <typename T>
void swapValues(T* a, T* b)
{
    cout << a << b;
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int s11 = 20;
    int s22 = 30;
    swapValues(&s11, &s22);
    cout << s11 << s22;
}
