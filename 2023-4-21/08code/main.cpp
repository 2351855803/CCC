#include <iostream>

using namespace std;


class Father
{
public:
    int a;
    Father(int a)
    {
        cout << "F有参构造" << endl;
        this->a = a;
    }

    void Func()
    {
        cout << "F-Func" << endl;
    }
    void Func(int num)
    {
        cout << "F-Func int " << endl;
    }
    void Func(char num)
    {
        cout << "F-Func char " << endl;
    }
};


class Son:public Father
{
public:
    int a;
    Son(int a, int b):Father(a),a(b)
    {
        cout << "S有参构造" << endl;
    }

    void Func()
    {
        cout << "S-Func" << endl;
    }
};


int main(int argc, char *argv[])
{
    Son s1(66,77);
    s1.Father::Func();
    s1.Father::Func(20);
    s1.Father::Func('3');
    return 0;
}
