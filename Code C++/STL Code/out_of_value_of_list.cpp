#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int ar[6]={8,1,9,3,7};
    list<int>mylist(ar,ar+6);
    list<int>::iterator it;
    it=find(mylist.begin(),mylist.end(),3);
    if(it==mylist.end())
    {
        cout<<"Not Found"<<endl;
    }
    if(it!=mylist.end())
    {
        cout<<"Found"<<endl;
    }


    //for(it=mylist.begin();it!=mylist.end();it++)
    //{
    //    cout<<*it<<"\t";
    //}
   cout<<endl;

}
