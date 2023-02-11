#include <iostream>


using namespace std;


void func(int &a)
{
	cout << "1";
}


void func(const int& a)
{
	cout << "2";
}


//int main()
//{
//	const int a = 10;
//	func(a);
//
//	system("pause");
//	return 0;
//}