#include <iostream>
using namespace std;

namespace First {
    int value = 10;
}

namespace Second {
    int value = 20;
}

void namespcemain() {
    cout << First::value << endl;
    cout << Second::value << endl;
}
