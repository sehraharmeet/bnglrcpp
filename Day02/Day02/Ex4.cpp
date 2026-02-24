//#include <iostream>
//using namespace std;
//class Logger {
//public:
//    void log(string msg) {
//        cout << "LOG: " << msg << endl;
//    }
//};
//class BankAccount : private Logger {
//private:
//    double balance;
//
//public:
//    BankAccount(double b) : balance(b) {}
//
//    void deposit(double amount) {
//        balance += amount;
//        log("Deposit made");
//    }
//};
//
//void mainfunction()
//{
//    BankAccount acc(1000);
//    acc.deposit(500);
//    acc.log("Test");
//}