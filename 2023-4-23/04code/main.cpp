#include <iostream>

using namespace std;

template<class T1, class T2>
class Data
{
    template<typename T3,typename T4>
    friend void Func(Data<T3,T4> &ob);
private:
    T1 a;
    T2 b;
public:
    Data()
    {

    }
    Data(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }
    T1 Geta()
    {
        return this->a;
    }
    T2 Getb()
    {
        return this->b;
    }
};



template<typename T3,typename T4>
void Func(Data<T3,T4> &ob)
{
    cout << ob.a << endl;
    cout << ob.b << endl;
}



int main(int argc, char *argv[])
{
    Data<int,char> d1(20,'a');
    Func(d1);

    return 0;
}
