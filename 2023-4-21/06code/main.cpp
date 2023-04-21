#include <iostream>

using namespace std;


class C
{
public:
    int c;
    C()
    {
        cout << "C的无参构造" << endl;
    }
    C(int c)
    {
        this->c = c;
        cout << "C的有参构造" << endl;
    }
    ~C()
    {
        cout << "C的析构函数" << endl;
    }

};


class A
{
public:
    int a;
    A()
    {
        cout << "A的无参构造" << endl;
    }
    A(int a)
    {
        this->a = a;
        cout << "A的有参构造" << endl;
    }
    ~A()
    {
        cout << "A的析构函数" << endl;
    }


};


class B:protected A
{
public:
    int b;
    C obc;
    B()
    {
        cout << "B的无参构造" << endl;
    }
    B(int a, int b, int c):obc(c),b(b),A(a)
    {

        cout << "B的有参构造" << endl;
    }
    ~B()
    {
        cout << "B的析构函数" << endl;
    }

};



int main(int argc, char *argv[])
{

    B b(1,2,3);
    return 0;
}
