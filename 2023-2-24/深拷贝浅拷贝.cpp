#include <iostream>

using namespace std;

/* ǳ�����ᵼ�¶����ڴ��ظ��ͷ� */
class Person
{
public:
	/* ���캯�� */
	Person()
	{
		cout << "���캯������" << endl;
	}
	Person(int age, int* weight)
	{
		cout << "�вι��캯������" << endl;
		this->age = age;
		this->weight = new int(60);
	}
	//Person(const Person& P)
	//{
	//	cout << "�в�Person���캯������" << endl;
	//	this->age = P.age;
	//	this->weight = new int(60);
	//}
	Person(const Person& P)
	{
			cout << "�в�Person���캯������" << endl;
			this->age = P.age;
			this->weight = new int(*P.weight);
	}
	/* �������� */
	~Person()
	{
		cout << "������������" << endl;
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
	cout << "����Ϊ " << P1.age << "����Ϊ" << *P1.weight << endl;
	cout << "����Ϊ " << P2.age << "����Ϊ" << *P2.weight << endl;
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