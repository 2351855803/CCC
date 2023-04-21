#include <iostream>

using namespace std;





class Data
{
private:
public:
    Data()
    {
        cout << "无参构造" << endl;
    }
    ~Data()
    {
        cout << "析构函数" << endl;
    }
    void Func()
    {
        cout << "Func" << endl;
    }

};

class SmartPoint
{
private:
    Data *p;
public:
    SmartPoint()
    {

    }
    SmartPoint(Data *p)
    {
        this->p = p;
    }
    ~SmartPoint()
    {
        delete this->p;
    }
    Data& operator*()
    {
        return *(this->p);
    }
    Data* operator->()
    {
        return this->p;
    }

};

void Test01()
{
    SmartPoint p1( new Data );
    //p1.p->Func();
    (*p1).Func();     //通过成员函数进行运算符重载，访问私有数据
    //p1.operator ->()->Func();
    p1->Func();


}

int main(int argc, char *argv[])
{
    Test01();
    return 0;
}
