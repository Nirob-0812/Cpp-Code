#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(512);
    vec.push_back(51);
    vec.push_back(25);
    vec.push_back(22);
    vec.push_back(1022);
    vec.push_back(12);
    sort(vec.begin(),vec.begin()+3);
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
}
