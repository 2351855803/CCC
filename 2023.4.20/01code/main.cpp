#include <iostream>
#include <string>
using namespace std;

class Person
{
    friend ostream& operator<<(ostream &out,Person p);

private:
    int num;
    string name;
    int score;


public:
    Person(int num, string name, int score)
    {
        this->num = num;
        this->name = name;
        this->score = score;
    }
    Person()
    {

    }
    Person operator+(Person p)
    {
        Person temp;
        temp.name = this->name + p.name;
        temp.num = this->num + p.num;
        temp.score = this->score + p.score;
        return temp;
    }



};


ostream& operator<<(ostream &out,Person p)
{
    cout << p.name << " " << p.num << " " << p.score << endl;
    return out;
}



int main(int argc, char *argv[])
{
    Person p1(100,"lucy",99);
    Person p2(1000,"bo",999);

    cout << p1+p2 << endl;
    // p1+p2 = p1.operator+(p2)

    return 0;
}
