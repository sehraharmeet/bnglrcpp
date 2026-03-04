#include <iostream>
#include <any>
using namespace std;

int main() {
    any data;

    data = 10;
    cout << any_cast<int>(data) << endl;

    data = string("Hello");
    cout << any_cast<string>(data);
}
