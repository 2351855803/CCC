#include <iostream>
#include <vector>

using namespace std;


void Test01()
{
    vector<int> v1;
    //��β������
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    //��������

    //����һ��������������Ԫ�ص�λ��
    vector<int>::iterator p = v1.begin();
    for(;p != v1.end(); p++)
    {
        cout << v1.capacity() << endl;
        cout << *p << endl;
    }
}


void Test02()
{
    vector<int> v1(10,2);
    vector<int>::iterator p = v1.begin();
    cout << "����Ϊ" << v1.capacity() << endl;
    for(; p < v1.end(); p++)
    {
        cout << *p << endl;
    }
    v1.push_back(66);
    cout << "����Ϊ" << v1.capacity() << endl;

}

int main(int argc, char *argv[])
{
    Test02();
    return 0;
}
