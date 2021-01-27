#include<iostream>
#include<list>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(15);
    vec.push_back(5);
    vec.push_back(42);
    vec.push_back(1);
    vec.push_back(7);
    vec.push_back(3);
    sort(vec.begin(),vec.end());
    vec.reverse();
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }

}
