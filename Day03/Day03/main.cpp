//#include<iostream>
//#include"Ex1.h"
//using namespace std;
//
//void main()
//{
//	Ex1_main();
//}

#include <iostream>
using namespace std;

struct Example
{  
    int arr[20];
    char a;   
};

int main()
{
    cout << "Size of struct: " << sizeof(Example) << endl;
}
