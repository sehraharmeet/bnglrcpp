#include <iostream>
#include <variant>
using namespace std;

int main() {
    variant<int, string> data;

    data = 10;
    cout << get<int>(data) << endl;

    data = "Harmeet";
    cout << get<string>(data);
}
