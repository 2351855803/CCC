#include <iostream>

using namespace std;

class Person
{
    //friend bool operator==(Person p1, Person p2);

public:
    int num;
    Person(int num)
    {
        this->num = num;
    }
    bool operator==(Person ob)
    {
        if(this->num == ob.num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

//    void operator=(Person p1)
//    {
//        this->num = p1.num;
//    }

    Person operator++(int)
    {
        Person temp = *this;
        this->num = this->num + 1;
        return temp;
    }
    Person operator++()
    {
        this->num = this->num + 1;
        return *this;
    }

};








int main(int argc, char *argv[])
{
    Person p1(10);
    Person p2(10);
    p2 = ++p1;
    cout << p1.num << " " << p2.num << endl;
    return 0;
}
