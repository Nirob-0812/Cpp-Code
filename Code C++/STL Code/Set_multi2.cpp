#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<pair<string,int>>s;
    multiset<pair<string,int>>::iterator it;
     s.insert(make_pair("nirob",4));
     s.insert(make_pair("nirob",4));
     s.insert(make_pair("nirob",4));
     s.insert(make_pair("joy",4));
     s.insert(make_pair("sanjoy",2));
     s.insert(make_pair("faruk",1));
     s.insert(make_pair("nirob",4));
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

