#include "mystring.h"


MyString::MyString()
{
    this->size = 0;
    this->str = NULL;
}

MyString::MyString(char *str)
{
    this->size = strlen(str);
    this->str = new char[this->size+1];
    memset(this->str,0,size+1);
    strcpy(this->str,str);

}

MyString::MyString(const MyString &mstr)
{
    this->size = mstr.size;
    this->str = new char[size+1];
    memset(this->str,0,size+1);
    strcpy(this->str,mstr.str);
}

char &MyString::operator[](int num)
{

    cout << *(this->str+num);
}

MyString MyString::operator+(MyString str)
{

    MyString temp;
    temp.size = this->size + str.size;
    temp.str = new char[temp.size+1];
    memset(temp.str,0,size+1);



    strcat(temp.str,this->str);
    strcat(temp.str,str.str);


    return temp.str;


}

MyString MyString::operator+(char *str)
{
    MyString temp;
    temp.size = this->size + strlen(str);
    temp.str = new char[temp.size+1];
    memset(temp.str,0,size+1);



    strcat(temp.str,this->str);
    strcat(temp.str,str);


    return temp.str;
}

MyString &MyString::operator=(MyString ob)
{
    this->size = ob.size;
    delete  [] this->str;
    this->str = new char[this->size+1];
    memset(this->str,0,this->size+1);
    strcpy(this->str,ob.str);
    return *this;
}




char *MyString::GetStr()
{
    return this->str;
}

//void MyString::operator=(char *str)
//{
//    this->str = str;
//}

