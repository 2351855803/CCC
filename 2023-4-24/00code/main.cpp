#include <iostream>

using namespace std;

//����
class Base{};
//����
class Son:public Base{};
//������
class Other{};



void Test01()
{
    //��������
    int num = static_cast<int>(10.66f);
    //����ת��
    Base *p = static_cast<Base *>(new Son);
    //����ת��
    Son *p2 = static_cast<Son *>(new Base);
//    //��������ת��
//    Base *p2 = static_cast<Base *>(new Other);

}


void Test02()
{
    //ָ��    ��const���ε�const����
    int *p = NULL;
    const int *p2 = const_cast<const int*>(p);
    //ָ��    const���ε���const����
    const int *p3 = NULL;
    int *p4 = const_cast<int *>(p3);
    //����    ��const���ε�const����
    int num = 10;
    int &p5 = num;
    const int& p6 = const_cast<const int&>(p5);
    //����    const���ε���const����
    int num2 = 10;
    const int& p7 = num2;
    int &p8 = const_cast<int&>(p7);
}






int main(int argc, char *argv[])
{

    return 0;
}
