#include <iostream>

using namespace std;

//父类
class Base{};
//子类
class Son:public Base{};
//其他类
class Other{};



void Test01()
{
    //基本类型
    int num = static_cast<int>(10.66f);
    //上行转换
    Base *p = static_cast<Base *>(new Son);
    //下行转换
    Son *p2 = static_cast<Son *>(new Base);
//    //其他类型转换
//    Base *p2 = static_cast<Base *>(new Other);

}


void Test02()
{
    //指针    非const修饰到const修饰
    int *p = NULL;
    const int *p2 = const_cast<const int*>(p);
    //指针    const修饰到非const修饰
    const int *p3 = NULL;
    int *p4 = const_cast<int *>(p3);
    //引用    非const修饰到const修饰
    int num = 10;
    int &p5 = num;
    const int& p6 = const_cast<const int&>(p5);
    //引用    const修饰到非const修饰
    int num2 = 10;
    const int& p7 = num2;
    int &p8 = const_cast<int&>(p7);
}






int main(int argc, char *argv[])
{

    return 0;
}
