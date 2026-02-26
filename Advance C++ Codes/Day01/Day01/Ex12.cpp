#include <iostream>
#include <functional>
using namespace std;

int main()
{
    double balance = 1000.0;

    function<void(double)> transaction;

    int choice;
    int amount;

    cout << "Initial Balance: " << balance << endl;
    cout << "1. Deposit\n2. Withdraw\n3. Service Charge\nEnter choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    if (choice == 1)
    {
        transaction = [&balance](double amt)
            {
                balance += amt;
                cout << "Deposited Successfully.\n";
            };
    }
    else if (choice == 2)
    {
        transaction = [&balance](double amt)
            {
                if (amt <= balance)
                {
                    balance -= amt;
                    cout << "Withdrawal Successful.\n";
                }
                else
                {
                    cout << "Insufficient Balance.\n";
                }
            };
    }
    else
    {
        transaction = [&balance](double amt)
            {
                balance -= amt;
                cout << "Service Charge Deducted.\n";
            };
    }

    transaction(amount);

    cout << "Updated Balance: " << balance << endl;

    return 0;
}