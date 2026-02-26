//////#include <iostream>
//////using namespace std;
//////
//////int main()
//////{
//////    constexpr int size = 5;
//////    int arr[size];
//////}
////
////
////#include <iostream>
////using namespace std;
////
////constexpr int square(int x) {
////    return x * x;
////}
////
////int main() {
////    constexpr int size = square(4); 
////    int arr[size];  
////
////    cout << size << endl;
////}
//////
//////#include <iostream>
//////using namespace std;
////////
////////int factorial(int n) {
////////    return (n <= 1) ? 1 : n * factorial(n - 1);
////////}
////////
////////int main() {
////////    int result = factorial(5);
//////// //can we use result for the decalrion of array-NO
////////    cout << result << endl;  // 120
////////}
//////
//////constexpr int factorial(int n) {
//////    return (n <= 1) ? 1 : n * factorial(n - 1);
//////}
//////
//////int main() {
//////    constexpr int result = factorial(5);
//////    //can we use result for the decalrion of array
//////    cout << result << endl;  // 120
//////}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    constexpr int size = 5;
//    int arr[size];
//}
