#include <iostream>

using namespace std;


class Person
{
public:
	Person(int a, int b, int c) :a(a), b(b), c(c)
	{
		cout << "初始化列表调用" << endl;
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}

	int a;
	int b;
	int c;

};



//int main()
//{
//
//	Person P1(10,20,30);
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}