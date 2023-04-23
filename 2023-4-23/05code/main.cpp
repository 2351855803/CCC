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
        cout << "类模板无参构造" << endl;
    }
    Base(T1 n1, T2 n2)
    {
        this->n1 = n1;
        this->n2 = n2;
        cout << "类模板有参构造" << endl;
    }

};

template<class T1, class T2 ,class T3>
class Son:public Base<T1,T2>         //这里要将类模板具体化，要不然不知道子类继承过去的是什么类型
{
public:
    T3 c;
    Son()
    {
        cout << "子类无参构造" << endl;
    }
    Son(T1 n1,T2 n2, T3 c):Base<T1,T2>(n1,n2)
    {
        this->c = c;
        cout << "子类有参构造" << endl;
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
