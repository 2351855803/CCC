#include <iostream>
#include <list>
#include <set>
using namespace std;

class temp
{
public:
    int num;
    temp(int num)
    {
        this->num = num;
    }


};
class MyCompare
{
public:
    bool operator()(temp n1, temp n2)
    {
        return n1.num < n2.num;
    }
};

ostream& operator<<(ostream& out , temp ob)
{
    cout << ob.num;
    return out;
}
void PrintfSet(set<temp,MyCompare> &s1)
{
    set<temp,MyCompare>::const_iterator it;
    for(it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it <<endl;
    }
}


void Test01()
{
    set<temp,MyCompare> s1;
    s1.insert(temp(60));
    s1.insert(temp(20));
    s1.insert(temp(10));
    s1.insert(temp(30));
    s1.insert(temp(70));
    PrintfSet(s1);

}

void Test02()
{
    set<int> s1;
    s1.insert(50);
    s1.insert(60);
    s1.insert(70);

    const set<int>::const_iterator it =  s1.find(90);
    if( s1.end() != it )
    {
        cout << "SuccessfulFind!!" << endl;
    }
    else
    {
        cout << "NoFind!!" << endl;
    }
}


void Test03()
{
    set<int> s1;
    pair<set<int>::const_iterator,bool> re = s1.insert(20);
    if(re.second == true)
    {
        cout << "插入成功" << endl;
    }
    else
    {
        cout << "插入失败" << endl;
    }
    pair<set<int>::const_iterator,bool> re2 = s1.insert(20);
    if(re2.second == true)
    {
        cout << "插入成功" << endl;
    }
    else
    {
        cout << "插入失败" << endl;
    }
}

int main(int argc, char *argv[])
{
    Test03();
    return 0;
}
