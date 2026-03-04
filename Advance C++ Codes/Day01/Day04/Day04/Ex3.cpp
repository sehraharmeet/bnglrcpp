#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
};

int main() {
    Student s{ 1, "Aman" };

    auto [r, n] = s;

    cout << r << " " << n;
}d
