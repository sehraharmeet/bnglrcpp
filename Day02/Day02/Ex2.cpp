#include <iostream>
using namespace std;

class BankAccount {
protected:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double bal) {
        cout << "Base COnst"; 
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    /*virtual void BankName() = 0;*/
};
 
class SavingsAccount : virtual public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string name, int accNo, double bal, double rate)
        : BankAccount(name, accNo, bal)
    {
        cout << "Derieved COnst";
        interestRate = rate;
    }

    void addInterest() {
        double interest = balance * interestRate;
        balance += interest;
        cout << "Interest Added: " << interest << endl;
    }
    void display() {
        cout << "SAVINGGG";
    }
};
class LoanFacility :virtual public BankAccount
{ 
protected:
    double loanAmount;
public:
    LoanFacility(string name, int accNo, double bal, double rate, double loan)
        :BankAccount(name,accNo,bal)
    { 
        loanAmount = loan; 
    }
    void showLoan() 
    { 
        cout << "Loan Amount: " << loanAmount << endl; 
    }  void display() {
        
        cout << "LOANNNN" ;
    }
};
class PremiumAccount  : public SavingsAccount, public LoanFacility
{ 
public:
    PremiumAccount(string name, int accNo, double bal, double rate, double loan)
        : BankAccount(name,accNo,bal),SavingsAccount(name, accNo, bal, rate), 
        LoanFacility(name, accNo, bal, rate,loan)
    {}
    void getCashBack()
    {
        balance += 500;
        cout << "Premium Added";
    } 
    
};
//add final keyword to above class as class PremiumAccount final
//class SubPremium :public PremiumAccount
//{
//
//};
void BankExample() {
   
    /*cout << "Welcome to Savings acccount";
    SavingsAccount s1("Harmeet", 101, 10000, 0.05);

    s1.deposit(2000);
    s1.addInterest();
    s1.display();*/

    cout << "Welcome to Premium acccount";
    PremiumAccount pa("Reema", 102, 300, 10.2, 500);
    pa.deposit(9000);
    pa.addInterest();
    pa.getCashBack();
    pa.showLoan();
    pa.SavingsAccount::display();
    //cout << pa.balance;
}
 