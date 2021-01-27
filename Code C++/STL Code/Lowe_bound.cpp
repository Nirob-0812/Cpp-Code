#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>vec={2,3,4,5,8,9};
    vector<int>::iterator it;
    it=lower_bound(vec.begin(),vec.end(),6);
    cout<<*it<<endl;
}
