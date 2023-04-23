#include <iostream>

using namespace std;


class Data
{
    friend ostream& operator<<(ostream& out ,Data data);
private:
    int data;
public:
    Data(int data)
    {
        this->data = data;
    }
};

ostream& operator<<(ostream& out ,Data data)
{
    cout << data.data;
    return out;
}

template<typename T>
void MyPrintf(T temp)
{
    cout << temp << endl;
}



int main(int argc, char *argv[])
{
    Data d1(600);
    MyPrintf(d1);
    return 0;
}
