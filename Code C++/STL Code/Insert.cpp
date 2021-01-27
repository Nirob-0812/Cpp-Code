#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int Ar[5]={5,2,9,4,8};
    list<int>mylist(Ar,Ar+5);
    list<int>::iterator it;

    it=mylist.begin();//it is point at first index 5
    it++;             // then index increase so now point at 2
    mylist.insert(it,6); //now insert point at second index and put before this point
    cout<<*it<<endl;

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}
