#include <iostream>
#include <thread>
#include <exception>

using namespace std;

exception_ptr eptr = nullptr;

void worker()
{
    try
    {
        throw runtime_error("Thread error!");
    }
    catch (...)
    {
        eptr = current_exception();
    }
}

int main()
{
    thread t(worker);
    t.join();

    if (eptr)
    {
        try
        {
            rethrow_exception(eptr);
        }
        catch (const exception& e)
        {
            cout << "Main caught: " << e.what() << endl;
        }
    }
}