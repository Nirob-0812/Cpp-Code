#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={7,2,9,1,6};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),9);
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
}
