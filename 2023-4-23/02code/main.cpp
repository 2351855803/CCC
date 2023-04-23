#include <iostream>

using namespace std;



template<typename T>
void MyPrintf(T a, T b)
{
    cout << a << "  " << b << endl;
    cout << "Ä£°å" << endl;
}


void MyPrintf(int a, int b)
{
    cout << a << "  " << b << endl;
    cout << "ÆÕÍ¨" << endl;
}

void Test01()
{
    MyPrintf(10, 20);
    MyPrintf('a', 'b');
    MyPrintf(10, 'b');
    MyPrintf<int>(10, 'b');
}






int main(int argc, char *argv[])
{
    Test01();
    return 0;
}
