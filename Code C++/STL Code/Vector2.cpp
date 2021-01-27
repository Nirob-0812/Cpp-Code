#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec(5,1);
    cout<<"Vector Size: "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}
