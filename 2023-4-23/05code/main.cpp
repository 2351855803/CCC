#include <iostream>

using namespace std;


template<typename T1,typename T2>
class Base
{
public:
    T1 n1;
    T2 n2;
public:
    Base()
    {
        cout << "��ģ���޲ι���" << endl;
    }
    Base(T1 n1, T2 n2)
    {
        this->n1 = n1;
        this->n2 = n2;
        cout << "��ģ���вι���" << endl;
    }

};

template<class T1, class T2 ,class T3>
class Son:public Base<T1,T2>         //����Ҫ����ģ����廯��Ҫ��Ȼ��֪������̳й�ȥ����ʲô����
{
public:
    T3 c;
    Son()
    {
        cout << "�����޲ι���" << endl;
    }
    Son(T1 n1,T2 n2, T3 c):Base<T1,T2>(n1,n2)
    {
        this->c = c;
        cout << "�����вι���" << endl;
    }
};



int main(int argc, char *argv[])
{
    Son<int,int,char> s1(200,666,'a');
    cout << s1.c << endl;
    cout << s1.n1 << endl;
    cout << s1.n2 << endl;
    return 0;
}
