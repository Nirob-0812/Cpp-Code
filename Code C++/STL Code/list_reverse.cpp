#include<iostream>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    list<int> mylist;
    list<int>::iterator it;
    mylist.push_back(45);
    mylist.push_back(5);
    mylist.push_front(40);
    mylist.push_front(30);
    mylist.push_back(10);  //list 30,40,45,5,10
    sort(mylist.begin(),mylist.end());
     mylist.reverse();     //reverse 10,5,45,40,30
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
}
