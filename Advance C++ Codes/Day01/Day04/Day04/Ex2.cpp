#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string, double> data = { 1, "Laptop", 75000 };

    auto [id, product, price] = data;

    cout << id << " " << product << " " << price;
}
