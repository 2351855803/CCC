#include <iostream>


using namespace std;

/* 
    bool 之前C语言未学习过
	true  1；
	false 0；
*/


/* 在主函数调用，因为局部变量保存在栈区，函数调用完便释放掉了 */

/* 关于C++中的new调用

   作用：将数据开辟到堆区
   返回堆区中地址
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
	/* 栈曲调用完自动释放 */

	/* 一个存储在堆区一个在栈区 */
	cout << func2() << endl;
	cout << func() << endl;

	system("pause");
	return 0;
}