#include <iostream>
#include <thread>

using namespace std;

void task(string name)
{
    cout << "Thread is running "<<name<<endl;
}

int main()
{
    /*thread t(task);
    t.join();          //C++20Prior*/

    jthread t(task,"Bosch");//C++20
}
//C++20
