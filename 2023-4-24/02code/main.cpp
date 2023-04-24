#include <iostream>

using namespace std;


class Ob1
{
public:
    Ob1()
    {
        cout << "Ob1无参构造" << endl;
    }
    ~Ob1()
    {
        cout << "Ob1析构" << endl;
    }


};
class Ob2
{
public:
    ~Ob2()
    {
        cout << "Ob2析构" << endl;
    }


};
class Ob3
{
public:
    ~Ob3()
    {
        cout << "Ob3析构" << endl;
    }


};




void Test01()
{

    try
    {

       Ob1 o1;
       throw o1;

    }
    catch(int err)
    {
        cout << "int 类型异常捕获" << endl;
    }
    catch(Ob1 &o1)
    {
        cout << "Ob1异常" << endl;
    }
}


void Test02(Ob1& o1)
{

}


void Test03()
{
    try
    {
        throw out_of_range("out_of_range");
        //throw length_error("length_error");
    }
    catch(exception &ex1)
    {
        cout << "捕获到异常" << ex1.what() << endl;

    }
}

#include <string.h>
class MyException:public exception
{
private:
    string str;
public:
    MyException(){}
    MyException(string str)
    {
        this->str = str;
    }
    virtual const char* what() const throw()    //防止父类在子类前抛出异常
    {
        return this->str.c_str();
    }
};

void Test04()
{
    MyException m1 = (string)"我的异常";
    try
    {
        throw m1;
    }
    catch(exception &ex)
    {
        cout << "异常" << ex.what() << endl;
    }
}


int main(int argc, char *argv[])
{

    Test04();
    return 0;
}
