#include <iostream>
#include "mystring.h"
using namespace std;




ostream& operator<<(ostream &out, MyString str)
{
    cout << str.str;
    return out;
}





int main(int argc, char *argv[])
{


    MyString str = "abcdef";
    MyString str2 = "66666";
    MyString temp1 = str+str2;
    MyString temp2 = str+"str2";

    MyString test1 = "vv";
    MyString test2 = "bb";
    MyString test3 = "ll";

    cout << test1 << endl;

    test1 = test2 = test3;

    cout << test2 << endl;

    cout << str+str2+"llllllll" << endl;

    return 0;
}
