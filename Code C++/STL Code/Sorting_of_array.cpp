#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int Array[5]={8,1,15,8,4};
    sort(Array,Array+5);

    for(int i=0;i<5;i++)
    {
        cout<<Array[i]<<endl;
    }
}
