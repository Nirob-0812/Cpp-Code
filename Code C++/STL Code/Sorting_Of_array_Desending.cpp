#include<iostream>
#include<vector>
#include<algorithm>
bool Desending(int a,int b)
{
    return (a>b);
}
using namespace std;
int main()
{
    int Array[5]={8,1,15,8,4};
    sort(Array,Array+5,Desending);

    for(int i=0;i<5;i++)
    {
        cout<<Array[i]<<endl;
    }
}
