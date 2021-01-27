#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<iterator>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,3,3,4,4,6,8,9};
    auto it=upper_bound(vec.begin(),vec.end(),3);
    auto it1=lower_bound(vec.begin(),vec.end(),8);
    cout<<"Index: "<<distance(vec.begin()+1,it)<<endl;
    cout<<"Index: "<<it1-vec.begin()<<endl;
}
