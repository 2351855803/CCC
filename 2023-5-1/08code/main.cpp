#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


////普通函数实现一元谓词，提供策略
//bool Great30(int num)
//{
//    return num > 30;
//}

////仿函数实现一元谓词
//class ClassGreat30
//{
//public:
//    bool operator()(int num)
//    {
//        return num > 30;
//    }
//};

void Test01()
{

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int>::iterator it;
    it = find_if(v1.begin(),v1.end(), bind2nd(greater<int>(),30));
    if( it != v1.end() )
    {
        cout << "找到为" << *it << endl;
    }

}








int main(int argc, char *argv[])
{
    Test01();
    return 0;
}
