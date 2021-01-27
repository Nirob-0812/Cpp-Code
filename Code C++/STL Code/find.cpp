#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int Ar[5]={5,2,9,4,8};
    list<int>mylist(Ar,Ar+5);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),4);
    mylist.insert(it,14);
    cout<<*it<<endl;

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}
