#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
 bool desending(int a,int b)
 {
        return(a>b);
 }
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(421);
    vec.push_back(21);
    vec.push_back(42);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(5);
    vec.push_back(72);
    sort(vec.begin(),vec.end(),desending);

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
}
