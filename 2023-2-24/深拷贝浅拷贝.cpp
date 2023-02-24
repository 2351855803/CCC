#include <iostream>

using namespace std;

/* 浅拷贝会导致堆区内存重复释放 */
class Person
{
public:
	/* 构造函数 */
	Person()
	{
		cout << "构造函数调用" << endl;
	}
	Person(int age, int* weight)
	{
		cout << "有参构造函数调用" << endl;
		this->age = age;
		this->weight = new int(60);
	}
	//Person(const Person& P)
	//{
	//	cout << "有参Person构造函数调用" << endl;
	//	this->age = P.age;
	//	this->weight = new int(60);
	//}
	Person(const Person& P)
	{
			cout << "有参Person构造函数调用" << endl;
			this->age = P.age;
			this->weight = new int(*P.weight);
	}
	/* 析构函数 */
	~Person()
	{
		cout << "析构函数调用" << endl;
		if (NULL != weight)
		{	
			delete weight;
			weight = NULL;
		}
	}

	int age;
	int* weight;
};

void Test()
{
	int *weight = NULL;
	Person P1(20,weight);
	Person P2(P1);
	cout << "年龄为 " << P1.age << "体重为" << *P1.weight << endl;
	cout << "年龄为 " << P2.age << "体重为" << *P2.weight << endl;
}



//int main()
//{
//	Test();
//	
//
//
//	system("pause");
//	return 0;
//}