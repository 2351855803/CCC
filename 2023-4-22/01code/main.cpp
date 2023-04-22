#include <iostream>

using namespace std;


class Animal
{
public:
    virtual void Eat() = 0;
    virtual void DoWhat() = 0;
    virtual ~Animal()
    {
        cout << "AnimalÎö¹¹" << endl;
    }
};


class Dog:public Animal
{
    virtual void Eat()
    {
        cout << "DogEat" << endl;
    }
    virtual void DoWhat()
    {
        cout << "¹·³Ô¹ÇÍ·" << endl;
    }
    ~Dog()
    {
        cout << "DogÎö¹¹" << endl;
    }

};

class Cat:public Animal
{
    virtual void Eat()
    {
        cout << "CatEat" << endl;
    }
    virtual void DoWhat()
    {
        cout << "Ã¨³ÔÓã" << endl;
    }
    ~Cat()
    {
        cout << "CatÎö¹¹" << endl;
    }
};

void Test01()
{
    Animal *p1 = new Dog;
    p1->DoWhat();
    p1->Eat();

    Animal *p2 = new Cat;
    p2->DoWhat();
    p2->Eat();

    delete p1;
    delete p2;
}



int main(int argc, char *argv[])
{
    Test01();
    return 0;
}
