#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(T value)
    {
        arr[++top] = value;
    }

    T pop()
    {
        return arr[top--];
    }
};
int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);

    cout << s1.pop();
}


