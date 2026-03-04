#include <iostream>
#include <thread>

using namespace std;
using namespace std::chrono;

void task(stop_token st, string& name)
{
    for (int i = 1; i <= 5 &&  !st.stop_requested(); i++)
    {
        cout << "Working " << i << endl;
        this_thread::sleep_for(2s);
    }

}

int main()
{
    /*thread t(task);
    t.join();          //C++20Prior*/

    jthread t(task, "Bosch");//C++20
    this_thread::sleep_for(5s);
    t.request_stop();
    cout << "Last One";
}
//C++20
