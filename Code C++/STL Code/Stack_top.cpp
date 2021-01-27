#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("nirob");
    s.push("joy");
    s.push("mehedi");
    s.push("hasan");
    s.pop();

    cout<<s.top();
}
