#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto now = system_clock::now();

    //zoned_time zt{ current_zone(), now };

    //cout << zt << endl;
    zoned_time zt{ "Europe/London", now };

    cout << zt << endl;
    cout << format("{:%d/%m%y=>%H:%M:%S %Z}", zt) << endl;


}
