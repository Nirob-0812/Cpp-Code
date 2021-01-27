#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<string> s;
    set<string>::iterator  it;
    s.insert("nirob");
    s.insert("mehedi");
    s.insert("hasan");
    s.insert("faruk");
    s.insert("sanjoy");
    s.insert("joy");
    s.insert("alif");
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

}
