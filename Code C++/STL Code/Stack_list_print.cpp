#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("nirob");
    s.push("hasan");
    s.push("mehedi");
    s.push("mcbc");
    while(!s.empty())
    {
        string x;
        x=s.top();
        cout<<x<<endl;
        s.pop();
    }

}
