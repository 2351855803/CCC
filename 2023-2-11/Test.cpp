/* 

		new
		delete
		引用  两个同样的指针
			  int a = 10;  int &b = a;

*/
#include <iostream>

using namespace std;


/* 堆区开辟一个int 为100，返回地址 */
/* 程序员管理释放 -> delete */
int* func()
{
	return new int(100);
}


/* 创建数组 */
/* 通过new开辟数组似乎无法初始化数组内容 */
/* 通过接受堆区数组首地址，然后解引用赋值 */
/* 默认为随机数 */
int* func2()
{
	return new int[5];
}

/* 通过引用 */
/* 交换 */
void transfor(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}



/* 
	引用当返回值类型
	局部变量
	猜测 局部变量存储在栈区，会被清除
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
//	/* 释放 */
//	/* 通过指针直接释放 */
//	//delete p;
//
//	//int* p = func2();
//	//*p = 100;
//	//*(p + 1) = 200;
//	//cout << *p << endl << *(p + 1) << endl << *(p + 2);
//	/* 释放 */
//	//delete[] p;
//
//	
//
//	//int a = 10;
//	//int &b = a;
//
//	//17825512
//	//17825512
//	/* 本质可以看为复制一个指针也指向这块内存空间 */
//	//cout << (int)&b << endl << (int)&a << endl;
//
//	int& a = Test01();
//	/* 通过引用给原变量赋值 */
//	Test01() = 300;
//	
//	cout << a;
//
//
//	system("pause");
//	return 0;
//}