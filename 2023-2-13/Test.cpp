#include <iostream>

using namespace std;


/*
	����ĳ�ʼ��������
	���캯��
	��������

*/


class Person
{
public:

	int age;

	//���캯��
	Person()
	{
		cout << "���캯��������" << endl;
	}
	//��������
	~Person()
	{
		cout << "��������������" << endl;
	}
	//�вι��캯��
	Person(int num)
	{
		cout << "�вι��캯��������" << endl;
		this->age = num;

	}
	//�������캯��
	Person(const Person *const p)
	{
		cout << "�������캯��������" << endl;
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