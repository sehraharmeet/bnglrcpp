#include <iostream>
#include <array>

using namespace std;

int main()
{
    int arr[10];
    cout << typeid(arr).name() << endl;
    int raw[] = { 1,2,3,4 };
    cout << typeid(raw).name() << endl;
    auto rawarr = to_array(raw);
    cout << typeid(rawarr).name() << endl;
    //cout << arr.size() << endl;    
}
