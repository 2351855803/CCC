/* 

		new
		delete
		����  ����ͬ����ָ��
			  int a = 10;  int &b = a;

*/
#include <iostream>

using namespace std;


/* ��������һ��int Ϊ100�����ص�ַ */
/* ����Ա�����ͷ� -> delete */
int* func()
{
	return new int(100);
}


/* �������� */
/* ͨ��new���������ƺ��޷���ʼ���������� */
/* ͨ�����ܶ��������׵�ַ��Ȼ������ø�ֵ */
/* Ĭ��Ϊ����� */
int* func2()
{
	return new int[5];
}

/* ͨ������ */
/* ���� */
void transfor(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}



/* 
	���õ�����ֵ����
	�ֲ�����
	�²� �ֲ������洢��ջ�����ᱻ���
*/
int& Test01()
{
	int a = 10;
	return a;
}


//int main()
//{
//
//
//	/*int* p = func();*/
//	/* �ͷ� */
//	/* ͨ��ָ��ֱ���ͷ� */
//	//delete p;
//
//	//int* p = func2();
//	//*p = 100;
//	//*(p + 1) = 200;
//	//cout << *p << endl << *(p + 1) << endl << *(p + 2);
//	/* �ͷ� */
//	//delete[] p;
//
//	
//
//	//int a = 10;
//	//int &b = a;
//
//	//17825512
//	//17825512
//	/* ���ʿ��Կ�Ϊ����һ��ָ��Ҳָ������ڴ�ռ� */
//	//cout << (int)&b << endl << (int)&a << endl;
//
//	int& a = Test01();
//	/* ͨ�����ø�ԭ������ֵ */
//	Test01() = 300;
//	
//	cout << a;
//
//
//	system("pause");
//	return 0;
//}