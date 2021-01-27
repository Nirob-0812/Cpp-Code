#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int>s;
    multiset<int>::iterator it;
    s.insert(400);
    s.insert(400);
    s.insert(400);
    s.insert(400);
    s.insert(400);
    s.insert(4);
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
}
