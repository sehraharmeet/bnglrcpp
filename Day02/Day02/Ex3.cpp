////#include <iostream>
////using namespace std;
////class Account {
////public:
////    int balance;
////
////    Account() { balance = 1000; }
////    Account(int b) { balance = b; }
////
////    Account operator + (Account a) {
////        return Account(balance + a.balance);
////    }
////};
////void operatorCheck() {
////    Account acc1(2000);
////    Account acc2(3000);
////
////    Account acc3 = acc1 + acc2;
////    cout << acc3.balance;
////}
//
//
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//public:
//    void deposit()
//    {
//        cout << "Deposit";
//    }
//    void virtual calculateInterest() {
//        cout << "No Interest\n";
//    }
//};
//
//class SavingsAccount : protected BankAccount {
//public:
//    void calculateInterest() {
//        deposit();
//        cout << "Savings Interest Applied\n";
//    }
//};
// 
//
//
//void mainnewone()
//{
//    SavingsAccount sa;
//    sa.calculateInterest();
//    sa.deposit();
//}
