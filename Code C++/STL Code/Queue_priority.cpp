#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q;
    q.push(400);
    q.push(200);
    q.push(350);
    q.push(10);
    q.push(5);
    q.push(2);
    q.push(42);
    q.push(100);
    while(!q.empty())
    {
        int x;
        x=q.top();
        cout<<x<<endl;
        q.pop();
    }
}
