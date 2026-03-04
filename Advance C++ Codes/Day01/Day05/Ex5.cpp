#include <iostream>
#include <thread>

using namespace std;

void task()
{
    cout << "Thread is running\n";
}

int main()
{
    thread t(task);    
    t.join();          
}
