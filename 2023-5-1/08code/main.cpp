#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


////��ͨ����ʵ��һԪν�ʣ��ṩ����
//bool Great30(int num)
//{
//    return num > 30;
//}

////�º���ʵ��һԪν��
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
        cout << "�ҵ�Ϊ" << *it << endl;
    }

}








int main(int argc, char *argv[])
{
    Test01();
    return 0;
}
