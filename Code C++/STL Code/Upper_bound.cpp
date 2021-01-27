#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec={1,3,4,5,6,8,9};
    vector<int>::iterator it;
    it=upper_bound(vec.begin(),vec.end(),1);
     cout<<((it==vec.end())?"Not Found":to_string(*it));
    //if(it==vec.end())
      //  cout<<"Not Found"<<endl;
    //else
      //  cout<<*it<<endl;
}


