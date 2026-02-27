#include <iostream>
using namespace std;

int main()
{
	//only C++17
	constexpr auto add = [](int a, int b)
		{
			//cout << "IN";
			int x = 99;
			return a + b;
		};
	constexpr int result = add(3, 4);
	cout << result;

}
