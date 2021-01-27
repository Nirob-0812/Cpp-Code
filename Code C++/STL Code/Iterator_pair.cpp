#include<iostream>
#include<list>
#include<utility>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
     vector<pair<int,string>>vec;
     vector<pair<int,string>>::iterator it;
     vec.push_back(make_pair(4,"nirob"));
     vec.push_back(make_pair(2,"alif"));
     vec.push_back(make_pair(8,"junayed"));
     for(it=vec.begin();it!=vec.end();it++)
     {
         cout<<it->second<<" "<<it->first<<endl;
     }


}
