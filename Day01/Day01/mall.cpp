#include <iostream>
using namespace std;


class MallLocker
{
public:

    void insertMoneyOrCard()
    {
        authenticateUser();
        reportToManager();
    }

    void putBag()
    {
        cout << "Bag placed inside locker.\n";
    }

    void lockLocker()
    {
        activateLockMechanism();
    }

private:
    void internalpurpsoe()
    {
        cout << "Card/Money accepted. Locker opened.\n";
    }
    void authenticateUser()
    {
        internalpurpsoe();
        cout << "Card/Money accepted. Locker opened.\n";
    }
    void reportToManager()
    {
        cout << "Manager will be notified.\n";
    }
    void activateLockMechanism()
    {
        cout << "Locker locked automatically.\n";
        cout << "Encryption + Sensor system activated.\n";
    }
};

void Phoenix()
{
    MallLocker locker;

    locker.insertMoneyOrCard();
    locker.putBag();
    locker.lockLocker();

 }