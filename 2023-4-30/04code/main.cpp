#include <iostream>
#include <stack>
#include <queue>

using namespace std;



void Test01()
{
    stack<int> s1;
    s1.push(50);
    s1.push(20);
    s1.push(40);
    s1.push(10);
    s1.push(20);

    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;

}


void Test02()
{
    queue<char> q1;
    q1.push('q');
    q1.push('w');
    q1.push('e');
    q1.push('r');
    cout << q1.back() << endl;
    cout << q1.front() <<endl;
    q1.pop();
    cout << q1.front() <<endl;

}



int main(int argc, char *argv[])
{
    Test02();
    return 0;
}
