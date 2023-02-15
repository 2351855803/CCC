#include <iostream>
#include <string>
using namespace std;


/* -------------------------------------------------------------
		测试深拷贝和浅拷贝
*/
class Person
{
public:
	int age;
	int* weight;
	//Person()
	//{

	//}
	Person(int age, int  weight)
	{
		this->age = age;
		this->weight = new int(weight);
	}
	Person(const Person& P)
	{
		cout << "拷贝函数被调用" << endl;
		this->age = (P).age;
		this->weight = new int(*(P.weight));
	}
	~Person()
	{ 
		cout << "析构函数被调用" << endl;
		if (this->weight != NULL)
		{
			delete(this->weight);
			this->weight = NULL;
		}
	}
};


/* --------------------------------------------------------------

			类对类引用

*/


class Phone
{
public:
	int number;
};
class People
{
public:
	string name;
	Phone phone;

	/* 使用初始化列表 */
	People(string _name, Phone  _phone) :name(_name), phone(_phone)
	{
		cout << "有参构造函数被调用" << endl;

	}

};


void Test()
{
	Person p1(10, 160);
	Person p2(p1);
	cout << p1.age << endl;
	cout << p2.age << endl;
	cout << *p1.weight << endl;
	cout << *p2.weight << endl;
}


void Test2()
{
	Phone apple;
	apple.number = 123;
	People p1("张三", apple);
	cout << p1.name << p1.phone.number << endl;
}

/* -------------------------------------------------------------
		静态成员变量和静态成员函数
*/

class Person1
{
public:
	/* 类内声明类外初始化 */
	static int num;

	static void func()
	{
		Person1::num = 999;

		cout << "static void func!!!" << endl;
	}

};

int Person1::num = 100;

void Test3()
{
	Person1 p1;
	p1.func();
	Person1::func();

}


int main()
{
	
	//Person1 P1;
	//Person1 P2; 

	//P1.num = 200;
	//P2.num = 100;
	//cout << P2.num << endl;
	//cout << P1.num << endl;
	Test3();
	cout << Person1::num << endl;

	system("pause");
	return 0;
}