#include <iostream>

using namespace std;


class Animals
{
public:
    int num;
};

class Sheep:virtual public Animals
{

};

class Tuo:virtual public Animals
{

};

class SheepTuo:public Sheep, public Tuo
{

};






int main(int argc, char *argv[])
{
    SheepTuo s1;

    cout << &s1.num << endl;
    cout << &s1.Sheep::num << endl;
    cout << &s1.Tuo::num << endl;
    return 0;
}
