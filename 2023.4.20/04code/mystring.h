#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <string.h>

using namespace std;

class MyString
{


    friend ostream& operator<<(ostream &out, MyString str);
    int size;
    char *str;
public:
    MyString();
    MyString(char *str);
    MyString(const MyString& mstr);

    char& operator[](int num);
    MyString operator+(MyString str);
    MyString operator+(char *str);
    MyString& operator=(MyString ob);

    char* GetStr();

    //void operator=(char *str);


};

#endif // MYSTRING_H
