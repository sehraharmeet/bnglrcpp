#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p1 = make_unique<int>(10);

    cout << "p1 value = " << *p1 << endl;

    // Transfer ownership
    unique_ptr<int> p2 = move(p1);

    cout << "p2 value = " << *p2 << endl;

    if (p1)
        cout << "p1 still owns memory\n";
    else
        cout << "p1 is now empty (nullptr)\n";
}
