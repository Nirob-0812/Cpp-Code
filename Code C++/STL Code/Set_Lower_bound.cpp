#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,6,8,9};
    set<int> s (vec.begin(),vec.end());
    auto it=s.upper_bound(8);
    auto it1=s.lower_bound(3);
    cout<<"Upper Bound: "<<(it!=s.end()? to_string(*it):"Not Found")<<endl;
    cout<<"Lower Bound: "<<(it1!=s.end()? to_string(*it1):"Not Found")<<endl;

}
