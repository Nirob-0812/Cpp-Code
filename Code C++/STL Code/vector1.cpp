#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(20);
    vec.push_back(12);
    vec.push_back(15);
      vec[0]=9;
    for(int i=0;i<4;i++)
    {
        if(i==0)
        {
            cout<<"First Index: "<<vec[i]<<endl;
        }
        if(i==1)
        {
            cout<<"Second Index: "<<vec[i]<<endl;
        }
        if(i==2)
        {
            cout<<"Third Index: "<<vec[i]<<endl;
        }
    }
}
