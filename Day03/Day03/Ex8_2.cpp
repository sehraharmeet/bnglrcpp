#include <iostream>
#include <string>
#include <cctype>  
using namespace std;

template <typename T>
T addAndThenReturn(T x, T y)
{
    if constexpr (is_same<T, string>::value)
    {
        for (int i = 0; i < x.length(); i++)
        {
            x[i] = tolower(x[i]);
        }

        for (int i = 0; i < y.length(); i++)
        {
            y[i] = tolower(y[i]);
        }

        return x + y;   
    }
    else
    {
        return x + y;   
    }
}

int main()
{
    string s1 = "Hello";
    string s2 = "WORLD";

    cout << addAndThenReturn(s1, s2) << endl;  

    cout << addAndThenReturn(10, 20) << endl; 
}