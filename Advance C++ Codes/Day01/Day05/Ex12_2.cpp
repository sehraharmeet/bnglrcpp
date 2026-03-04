#include <iostream>
#include <future>

using namespace std;

void worker()
{
    throw runtime_error("Thread error!");
}

int main()
{
    future<void> f = async(launch::async, worker);

    try
    {
        f.get();   // Exception is automatically rethrown here
    }
    catch (const exception& e)
    {
        cout << "Main caught: " << e.what() << endl;
    }

    return 0;
}