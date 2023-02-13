#include <iostream>

using namespace std;


/*
	对象的初始化和清理
	构造函数
	析构函数

*/


class Person
{
public:

	int age;

	//构造函数
	Person()
	{
		cout << "构造函数被调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "析构函数被调用" << endl;
	}
	//有参构造函数
	Person(int num)
	{
		cout << "有参构造函数被调用" << endl;
		this->age = num;

	}
	//拷贝构造函数
	Person(const Person *const p)
	{
		cout << "拷贝构造函数被调用" << endl;
		this->age = p->age;

	}

	

};



int main()
{

	Person P1;
	Person P2(20);
	Person P3(P2);



	system("pause");

	return 0;
}