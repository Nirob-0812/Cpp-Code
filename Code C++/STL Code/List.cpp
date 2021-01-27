#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> mylist;
    list<int>::iterator it;
    mylist.push_back(45);
    mylist.push_back(5);
    mylist.push_front(40);
    mylist.push_front(30);
    mylist.push_back(10);

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
