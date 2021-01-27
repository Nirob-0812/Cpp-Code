#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    multimap<string,int>m;
    multimap<string,int>::iterator it;
    m.insert(make_pair("nirob",4));
    m.insert(make_pair("nirob",6));
    m.insert(make_pair("nirob",8));
    m.insert(make_pair("iqbal",7));
    m.insert(make_pair("amit",7));
    m.insert(make_pair("joy",7));
    for(it=m.begin();it!=m.end();it++)
    {                                   //asscending order e bosbe
         cout<<it->first<<" "<<it->second<<endl;
    }
}
