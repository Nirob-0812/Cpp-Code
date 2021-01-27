#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    for(int i=0;i<5;i++)
    {
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    cout<<endl;
    it=vec.begin();
    it++;
    cout<<*it<<endl;
}
