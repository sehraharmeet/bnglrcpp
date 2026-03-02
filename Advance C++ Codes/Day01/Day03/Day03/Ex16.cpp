#include <iostream>
#include <concepts>
using namespace std;

 template<typename T>
concept ATMNumber = is_integral_v<T> || is_floating_point_v<T>;

 template<ATMNumber T>
void withdraw(T amount)
{
    if (amount <= 0)
    {
        cout << "Invalid withdrawal amount\n";
        return;
    }

    cout << "Withdrawn Amount = " << amount << endl;
}

 template<ATMNumber T>
void deposit(T amount)
{
    if (amount <= 0)
    {
        cout << "Invalid deposit amount\n";
        return;
    }

    cout << "Deposited Amount = " << amount << endl;
}

int main()
{
    withdraw(500);
    deposit(1200.75);

    //withdraw("Hello"); // Compilation Error
}