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
        cout << "����int�쳣" << err1 << endl;
    }
    catch(char err2)
    {
        cout << "����char�쳣" << err2 << endl;
    }
    catch(...)
    {
        cout << "���������쳣" << endl;
    }
}




void ShowStr(char const *str)
{
    if( NULL == str )
    {
        throw "��ָ��";
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
        cout << "�쳣Ϊ" << err << endl;
    }

    return 0;
}
