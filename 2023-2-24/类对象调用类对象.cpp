#include <iostream>
#include <string>
using namespace std;


/*
			A构造函数调用
			B构造函数调用
			B析构函数调用
			A析构函数调用

			由此可见 实例化B的时候，A先实例化。因为在栈区中开辟
					 A先开辟A后出，B的析构函数先
*/

class A
{
public:
	A()
	{
		cout << "A构造函数调用" << endl;
	}
	~A()
	{
		cout << "A析构函数调用" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B构造函数调用" << endl;
	}
	~B()
	{
		cout << "B析构函数调用" << endl;
	}

	A a;
};


class Phone
{
public:
	string phoneName;
	Phone()
	{

	}
	Phone(string phoneName)
	{
		this->phoneName = phoneName;
	}
};

class Person
{
public:
	Phone phone;
	string name;
	Person(string name, Phone phone)
	{
		this->name = name;
		this->phone = phone.phoneName;
	}



};



void Test1()
{
	B b;
}

int main()
{
	Test1();
	Phone Phone("苹果");
	Person P1("张三", Phone);
	cout << P1.name << "手机为" <<  P1.phone.phoneName << endl;


	system("pause");
	return 0;
}