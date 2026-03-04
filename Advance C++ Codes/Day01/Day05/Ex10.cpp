#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

thread_local int counter = 0;

void worker(int threadNo)
{
    for (int i = 0; i < 3; ++i)
    {
        counter++;
        this_thread::sleep_for(chrono::milliseconds(100));

        cout << endl << "Thread #" << threadNo
            << " | ID: " << this_thread::get_id()
            << " | Counter: " << counter << endl;
    }
}

int main()
{
    thread t1(worker, 1);
    thread t2(worker, 2);
    thread t3(worker, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}