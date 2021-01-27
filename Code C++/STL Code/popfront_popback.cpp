#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int ar[5]={5,9,1,3,6};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    mylist.pop_front(); //remove 5
    mylist.pop_back();  //remove 6
    mylist.pop_front();  //remove 9
    mylist.pop_back();   //remove 3



    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t"; //print only 1
    }
}
