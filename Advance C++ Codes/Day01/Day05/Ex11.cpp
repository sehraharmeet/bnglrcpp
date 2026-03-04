#include <iostream>
#include <thread>
#include <chrono>
#include <future>

using namespace std;

thread_local int counter = 0;

void worker(int threadNo)
{
    for (int i = 0; i < 3; ++i)
    {
        counter++;
        this_thread::sleep_for(chrono::milliseconds(100));

        cout << endl
            << "Thread #" << threadNo
            << " | ID: " << this_thread::get_id()
            << " | Counter: " << counter << endl;
    }
}

int main()
{
    future<void> f1 = async(launch::async, worker, 1);
    future<void> f2 = async(launch::async, worker, 2);
    future<void> f3 = async(launch::async, worker, 3);

    f1.get();
    f2.get();
    f3.get();

    return 0;
}