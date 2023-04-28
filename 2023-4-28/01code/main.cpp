#include <iostream>
#include <vector>

using namespace std;


void Test01()
{
    vector<int> v1;
    //从尾部插入
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    //遍历容器

    //定义一个迭代器保存首元素的位置
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
    cout << "容量为" << v1.capacity() << endl;
    for(; p < v1.end(); p++)
    {
        cout << *p << endl;
    }
    v1.push_back(66);
    cout << "容量为" << v1.capacity() << endl;

}

int main(int argc, char *argv[])
{
    Test02();
    return 0;
}
