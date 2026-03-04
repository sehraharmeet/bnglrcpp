#include <iostream>
#include <thread>
//#include<mutex>
using namespace std;
once_flag flag;
void initialize()
{
    cout << "Initialized only once!\n";
}

void worker()
{
    //initialize();
    call_once(flag,initialize);
}

int main()
{
    thread t1(worker);
    thread t2(worker);
    thread t3(worker);

    t1.join();
    t2.join();
    t3.join();
}
