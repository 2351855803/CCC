#include <iostream>

using namespace std;


class Animal
{
public:
    virtual void Speak()
    {
        cout << "����˵��" << endl;
        cout << "1" << endl;
    }
    void Func()
    {
        cout << "a" << endl;
    }
};

class Dog: public Animal
{
public:
    virtual void Speak()
    {
        cout << "��˵��" << endl;
        cout << "2" << endl;
    }
    int Func(int num)
    {
        cout << "b" << endl;
    }
};

int main(int argc, char *argv[])
{

    Dog *p = new Dog;
    p->Func(4);

    return 0;
}
