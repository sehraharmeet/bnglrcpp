#include <iostream>
#include <memory>
using namespace std;

int main() {

    shared_ptr<int> p1 = make_shared<int>(10);
    shared_ptr<int> p2 = p1;
    shared_ptr<int> p3 = p1;

    weak_ptr<int> wp = p1;   // weak pointer observing p1

    cout << "Shared count: " << p1.use_count() << endl;  // 3

    // weak_ptr does NOT increase count
    cout << "Shared count after weak_ptr: "
        << p1.use_count() << endl;  // still 3

    // Accessing weak_ptr safely
    if (auto temp = wp.lock()) {
        cout << "Value from weak_ptr: " << *temp << endl;
    }
}
