#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int ar[5]={5,9,1,3,6};
    list<int>mylist(ar,ar+5);
    if(mylist.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
        {
            cout<<"Filled"<<endl;
        }

}
