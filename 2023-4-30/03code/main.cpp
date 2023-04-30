#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;


class Person
{
public:
    float avScore;
    deque<float> score;
    float sumScore;
public:
    Person(){}

};




int main(int argc, char *argv[])
{
    vector< Person > v1(5,Person());
    vector< Person >::iterator it = v1.begin();

    int i = 0;
    for(i = 0; i < 5; i++)
    {

        cout << "请输入十个成绩" << endl;
        int j = 0;
        for(j = 0; j < 10; j++)
        {
            int temp = 0;
            cin >> temp;
            ((*(it+i)).score).push_back(temp);
        }
        //排序
        deque<float>::iterator begin = ((*(it+i)).score).begin();
        deque<float>::iterator end = ((*(it+i)).score).end();
        sort(begin,end);
        ((*(it+i)).score).pop_back();
        ((*(it+i)).score).pop_front();
    }




    for(i = 0; i < 5; i++)
    {
        deque<float>::iterator itd = ((*(it+i)).score).begin();
        (*(it+i)).sumScore = 0;
        int j = 0;
        for(j = 0; j < 8; j++)
        {
            (*(it+i)).sumScore += *(itd+j);
            cout << (*(itd+j)) << " ";
        }
        cout << "总分为" << (*(it+i)).sumScore;
        cout << "平均分为" << ((*(it+i)).sumScore)/(*(it+i)).score.size() << endl;

    }
    return 0;
}
