#include <iostream>
#include <vector>

using namespace std;

void Test01()
{
    vector<int> v1;
    v1.reserve(500);
    cout << "大小为" << v1.size() << "容量为" << v1.capacity() << endl;
    v1.assign(6,100);
    cout << "大小为" << v1.size() << "容量为" << v1.capacity() << endl;
    vector<int>(v1).swap(v1);
    cout << "大小为" << v1.size() << "容量为" << v1.capacity() << endl;
}


void Tset02()
{
    vector<int> v1(5,100);
    vector<int> v2(5,1000);
    vector<int> v3(5,10000);

    vector< vector<int> > vv;
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);

    vector< vector<int> >::iterator vvit;
    for(vvit = vv.begin(); vvit != vv.end(); vvit++)
    {
        vector<int>::iterator minv = (*vvit).begin();
        for(;minv != (*vvit).end(); minv++)
        {
            cout << *minv << endl;
        }
    }

}






int main(int argc, char *argv[])
{
    Tset02();
    return 0;
}
