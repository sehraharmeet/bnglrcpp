#include <iostream>
using namespace std; 

class BankAccount
{
private:
    double balance;

public:
    //setter-where we are setting values to private var
    void setBalance(double b)
    {
        if (b >= 0)
            balance = b;
        else
            cout << "Invalid balance\n";
    }
    //geter->controlled access->abstraction
    double getBalance()
    {
        return balance;
    }

    void showBalance()
    {
        cout << "Current Balance = " << balance << endl;
    }
};
void bankfunction()
{
    BankAccount ba;
    ba.setBalance(5000);
    ba.showBalance();

    cout << " Balance using Getter" << ba.getBalance();
}