#include<iostream>
#include<list>
#include<utility>
#include<iterator>
#include<vector>
#include<set>
using namespace std;
int main()
{
     set<pair<int,string>>st;
     set<pair<int,string>>::iterator it;
     st.insert(make_pair(4,"nirob"));
     st.insert(make_pair(2,"alif"));
     st.insert(make_pair(8,"junayed"));
     for(it=st.begin();it!=st.end();it++)
     {
         cout<<it->second<<" "<<it->first<<endl;
     }
}


