#include <iostream>
#include <string>

using namespace std;


void Test01()
{
    string s1 = "qwert";

    cout << s1 << endl;
    //s1[100] = '6';
    s1.at(66) = '7';

}

void Test02()
{
    string s1 = "www.sex.12345.sex.sex.com";
    while(s1.find("sex") != -1)
    {
        int p = s1.find("sex");
        s1.replace(p,3,"***");
    }
    cout << s1 << endl;
}


void Test03()
{
    char *str1 = "123";
    string str2 = "456";
    str1 = (char *)str2.c_str();             //CÓïÑÔ·ç¸ñ
    str1 = const_cast<char *>(str2.c_str()); //C++


}
int main(int argc, char *argv[])
{
    Test02();

    return 0;
}
