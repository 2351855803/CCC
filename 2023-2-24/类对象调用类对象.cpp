#include <iostream>
#include <string>
using namespace std;


/*
			A���캯������
			B���캯������
			B������������
			A������������

			�ɴ˿ɼ� ʵ����B��ʱ��A��ʵ��������Ϊ��ջ���п���
					 A�ȿ���A�����B������������
*/

class A
{
public:
	A()
	{
		cout << "A���캯������" << endl;
	}
	~A()
	{
		cout << "A������������" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B���캯������" << endl;
	}
	~B()
	{
		cout << "B������������" << endl;
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
	Phone Phone("ƻ��");
	Person P1("����", Phone);
	cout << P1.name << "�ֻ�Ϊ" <<  P1.phone.phoneName << endl;


	system("pause");
	return 0;
}