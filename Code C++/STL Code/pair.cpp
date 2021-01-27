#include<iostream>
#include<list>
#include<utility>
#include<iterator>
using namespace std;
int main()
{
    pair<string,int>p;
    p=make_pair("nirob",4);
    cout<<p.first<<" "<<p.second<<endl;
}
