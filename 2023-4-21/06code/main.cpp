#include <iostream>

using namespace std;


class C
{
public:
    int c;
    C()
    {
        cout << "C���޲ι���" << endl;
    }
    C(int c)
    {
        this->c = c;
        cout << "C���вι���" << endl;
    }
    ~C()
    {
        cout << "C����������" << endl;
    }

};


class A
{
public:
    int a;
    A()
    {
        cout << "A���޲ι���" << endl;
    }
    A(int a)
    {
        this->a = a;
        cout << "A���вι���" << endl;
    }
    ~A()
    {
        cout << "A����������" << endl;
    }


};


class B:protected A
{
public:
    int b;
    C obc;
    B()
    {
        cout << "B���޲ι���" << endl;
    }
    B(int a, int b, int c):obc(c),b(b),A(a)
    {

        cout << "B���вι���" << endl;
    }
    ~B()
    {
        cout << "B����������" << endl;
    }

};



int main(int argc, char *argv[])
{

    B b(1,2,3);
    return 0;
}
