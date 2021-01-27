#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>vec={2,3,4,5,8,9};
    vector<int>::iterator it;

    it=lower_bound(vec.begin(),vec.end(),13);
    cout<<"Position/index: "<<distance(vec.begin(),it)<<endl;
    cout<<"Position/Index: "<<it-vec.begin()<<endl;
    //if(it==vec.end())
        //*it=5555;
    cout<<"Value: "<<*it<<endl;
    if(it==vec.end())
        cout<<"Not Found"<<endl;
    else
        cout<<"Found"<<endl;
}


