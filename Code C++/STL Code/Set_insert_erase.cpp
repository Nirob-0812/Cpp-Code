#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> s;
    set<int>::iterator  it;
    s.insert(2);
    s.insert(8);
    s.insert(4);
    s.insert(12);
    s.insert(6);
    s.find(s.erase(4)); //4 is removed
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";//2,6,8,12
    }
    cout<<endl;
}

