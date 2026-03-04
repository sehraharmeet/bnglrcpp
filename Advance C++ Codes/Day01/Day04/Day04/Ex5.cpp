#include <iostream>
using namespace std;

int findUser(bool found) {
    if (found)
        return 101;
    else
        return -1;
}

int main() {
    int result = findUser(false);

    if (result != -1)
        cout << result;
    else
        cout << "User not found";
}
