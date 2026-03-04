#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    year y{ 2026 };
    month m{ 1 };
    day d{ 1 };

    year_month_day ymd = y / m / d;
    sys_days start = ymd;

    auto end = system_clock::now();
    auto diff = duration_cast<days>(end - start);

    cout << "Elapsed: " << diff.count() << "\n";
}