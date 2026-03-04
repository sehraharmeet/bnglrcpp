#include <iostream>
#include <optional>
using namespace std;

optional<int> findUser(bool found) {
    if (found)
        return 101;
    else
        return nullopt;
}

int main() {
    auto result = findUser(false);

    if (result)
        cout << *result;
    else
        cout << "User not found";
}
