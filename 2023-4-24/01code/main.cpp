#include <iostream>
#include <string.h>
using namespace std;


void Test01()
{
    try
    {
        throw 1;
    }
    catch(int err1)
    {
        cout << "捕获到int异常" << err1 << endl;
    }
    catch(char err2)
    {
        cout << "捕获到char异常" << err2 << endl;
    }
    catch(...)
    {
        cout << "捕获到其他异常" << endl;
    }
}




void ShowStr(char const *str)
{
    if( NULL == str )
    {
        throw "空指针";
    }
    if( 5 == strlen(str))
    {
        throw "5";
    }
    cout << str << endl;
}




int main(int argc, char *argv[])
{

    try
    {
        ShowStr("NULL1");
    }
    catch(char const* err)
    {
        cout << "异常为" << err << endl;
    }

    return 0;
}
