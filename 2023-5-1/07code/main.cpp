#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person
{
    friend void PrintfMap(map<int,Person> &m1);
private:
    int num;
    string name;
    float score;
public:
    Person(){}
    Person(int num, string name, float score)
    {
        this->num = num;
        this->name = name;
        this->score = score;
    }

};

void PrintfMap(map<int,Person> &m1)
{
    map<int,Person>::const_iterator it;
    for(it = m1.begin(); it != m1.end(); it++)
    {
        cout << "学号为" << (*it).first << "姓名为" << (*it).second.name << "分数为" << (*it).second.score << endl;
    }
}


void Test01()
{
    map<int,Person> m1;

    //1
    m1.insert(make_pair(100,Person(100,"11",88.8f)));
    //2
    m1.insert(pair<int,Person>(101,Person(101,"22",99.9f)));
    //3
    m1[102] = Person(103,"33",77.7f);

    //遍历
    PrintfMap(m1);
}


int main(int argc, char *argv[])
{
    Test01();
    return 0;
}
