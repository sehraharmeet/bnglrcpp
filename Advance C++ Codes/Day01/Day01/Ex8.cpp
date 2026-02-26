//////#include <iostream>
//////using namespace std;
//////
//////int sum(int arr[], int n)
//////{
//////    int total = 0;
//////
//////    for (int i = 0; i < n; i++)
//////        total += arr[i];
//////
//////    return total;
//////}
//////
//////int main()
//////{
//////    int arr[] = { 10,20,30,40,50 };
//////
//////    cout << sum(arr, 5);
//////}
//////
//////#include <iostream>
//////#include <vector>
//////using namespace std;
//////
//////int sum(vector<int> v)
//////{
//////    int total = 0;
//////
//////    for (auto x : v)
//////        total += x;
//////
//////    return total;
//////}
//////
//////int main()
//////{
//////    vector<int> v = { 10,20,30,40,50 };
//////    cout << sum(v);
//////}
////
//////#include <iostream>
//////#include <initializer_list>
//////using namespace std;
//////
//////int sum(initializer_list<int> list)
//////{
//////    int total = 0;
//////
//////    for (auto x : list)
//////        total += x;
//////
//////    return total;
//////}
//////
//////int main()
//////{
//////    cout << sum({ 1,2,3,4,5 });
//////}
////
////#include <iostream>
////using namespace std;
////
////class MyArray
////{
////    int data[10];
////    int size;
////
////public:
////    MyArray(int arr[], int s)
////    {
////        size = s;
////        for (int i = 0; i < s; i++)
////            data[i] = arr[i];
////    }
////
////    void display()
////    {
////        for (int i = 0; i < size; i++)
////            cout << data[i] << " ";
////    }
////};
////
////int main()
////{
////    int values[] = { 5,10,15 };
////    MyArray arr(values, 3);
////    arr.display();
////}
////
//////
//////#include <iostream>
//////#include <initializer_list>
//////using namespace std;
//////
//////class MyArray
//////{
//////    int data[10];
//////    int size;
//////
//////public:
//////    MyArray(initializer_list<int> list)
//////    {
//////        size = 0;
//////        for (auto x : list)
//////            data[size++] = x;
//////    }
//////
//////    void display()
//////    {
//////        for (int i = 0; i < size; i++)
//////            cout << data[i] << " ";
//////    }
//////};
//////
//////int main()
//////{
//////    MyArray arr{ 5,10,15 };
//////    arr.display();
//////}
//
//
//
//#include <iostream>
//#include <initializer_list>
//using namespace std;
//int main()
//{
//	//initializer_list<int> list = { 10,20,30 };
//	///*auto x = { 10,20,30 };*/
//	//cout << typeid(list).name();
//	//for (auto x : list)
//	//	cout << x;
//
//	for (auto x : {1,22,33})
//		cout << x;
//}
