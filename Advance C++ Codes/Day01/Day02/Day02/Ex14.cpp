#include <iostream>
using namespace std;

void show(int& x)
{
    cout << "Lvalue reference\n";
}

void show(int&& x)
{
    cout << "Rvalue reference\n";
}

int main()
{
    int a = 5;

    show(a);    // Lvalue
    show(10);   // Rvalue
}