#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>vec={2,3,4,5,8,9};
    vector<int>::iterator it;

    it=lower_bound(vec.begin(),vec.end(),5);
    cout<<"Position/index: "<<distance(vec.begin(),it)<<endl;
    cout<<"Position/Index: "<<it-vec.begin()<<endl;
    cout<<"Value: "<<*it<<endl;
}

