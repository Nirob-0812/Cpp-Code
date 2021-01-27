#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<string>q;
     q.push("nirob");
     q.push("mehedi");
     q.push("hasan");
     q.push("joy");
     q.push("faruk");
     q.push("sanjoy");
    while(!q.empty())
    {
        string x; //latter er priority onujai ulta vabe bosce
        x=q.top();
        cout<<x<<endl;
        q.pop();
    }
}

