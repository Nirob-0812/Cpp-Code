#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> mylist(10,15);
    list<int>::iterator it;
    cout<<"List Size: "<<mylist.size()<<endl;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;

    }
}
