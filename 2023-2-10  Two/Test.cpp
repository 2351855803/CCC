#include <iostream>


using namespace std;

/* 
    bool ֮ǰC����δѧϰ��
	true  1��
	false 0��
*/


/* �����������ã���Ϊ�ֲ�����������ջ����������������ͷŵ��� */

/* ����C++�е�new����

   ���ã������ݿ��ٵ�����
   ���ض����е�ַ
   int* p = new int(10);

*/
int* func()
{
	int a = 10;
	return &a;
}


int* func2()
{
	return new int(10);
}


int main()
{
	/* ջ���������Զ��ͷ� */

	/* һ���洢�ڶ���һ����ջ�� */
	cout << func2() << endl;
	cout << func() << endl;

	system("pause");
	return 0;
}