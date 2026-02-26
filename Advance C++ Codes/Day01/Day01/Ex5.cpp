//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//T add(T a, T b)
//{
//    return a + b;
//}
//
//template <>
//string add<string>(string a, string b)
//{
//    return "Coupon Applied for our " + a + " and whose name is " + b;
//}
//
//
//template <typename T, int TAX_PERCENT>
//class Bill
//{
//    T amount;
//
//public:
//    Bill(T amt) : amount(amt) {}
//
//    T calculateTotal()
//    {
//        return amount + (amount * TAX_PERCENT / 100);
//    }
//};
//
//int main()
//{
//    cout << "Integer Add: " << add(10, 20) << endl;      
//    cout << "Double Add: " << add(10.5, 5.5) << endl;     
//
//    cout << add(string("Trainer"), string("Harmeet")) << endl;
//
//    Bill<int, 18> b1(100);     
//    Bill<double, 5> b2(250.5);  
//
//    cout << "Total with 18% tax: " << b1.calculateTotal() << endl;
//    cout << "Total with 5% tax: " << b2.calculateTotal() << endl;
//
//    return 0;
//}
