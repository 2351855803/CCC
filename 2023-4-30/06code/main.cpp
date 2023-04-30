#include <iostream>

using namespace std;


//自己创建对组
template<class t1,class t2>
class MyPair
{
public:
    t1 data1;
    t2 data2;

    t1 first()
    {
        return this->data1;
    }
    t2 second()
    {
        return this->data2;
    }
};


MyPair<int,char> Test01()
{
    MyPair<int,char> p;
    p.data1 = 10;
    p.data2 = 'a';
    return p;
}


int main(int argc, char *argv[])
{
    MyPair<int,char> pa = Test01();
    cout << pa.first() << " " << pa.second() << endl;
    return 0;
}
