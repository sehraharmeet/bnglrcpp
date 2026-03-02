//#include <iostream>
//using namespace std;
//
//template<typename... Args>
//void print(Args... args)
//{
//	/*((cout << args << " "), ...);//1st version*/
//	//2nd version
//	/*(([](auto value)
//		{
//			cout <<endl<< value<<" ";
//			if (value > 0)
//				cout << " -> Positive";
//			else if (value < 0)
//				cout << " -> Negative";
//			else
//				cout << " -> Zero";
//
//		}(args)), ...);*/
//	auto mycheck = [](auto value)
//		{
//			cout << endl << value << " ";
//			if (value > 0)
//				cout << " -> Positive";
//			else if (value < 0)
//				cout << " -> Negative";
//			else
//				cout << " -> Zero";
//		};
//	(mycheck(args), ...);
//}
//
//int main()
//{
//	print(10, 20, 900, -89);
//}
