 #include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;

    m["nirob"]=4;
    m["joy"]=2;
    m["faruk"]=7;
    m["sanjoy"]=5;
    m.insert(make_pair("akil",9));
    m.insert(make_pair("walex",9));
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
