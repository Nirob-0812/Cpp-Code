#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,5,7,9};
    bool ans=binary_search(vec.begin(),vec.end(),2);
    cout<<ans<<endl;
    if(ans==1)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;

}
