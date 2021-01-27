#include<iostream>
#include<list>
#include<utility>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
     vector<pair<int,string>>vec;
     vec.push_back(make_pair(4,"nirob"));
     vec.push_back(make_pair(2,"alif"));
     vec.push_back(make_pair(8,"junayed"));
     for(int i=0;i<vec.size();i++)
     {
         cout<<vec[i].first<<" "<<vec[i].second<<endl;
     }
}

