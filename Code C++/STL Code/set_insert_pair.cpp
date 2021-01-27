#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<string> s;
    set<string>::iterator  it;
    s.insert("nirob");
    s.insert("mehedi");
    s.insert("hasan");
    s.insert("faruk");
    s.insert("sanjoy");
    s.insert("joy");
    s.insert("alif");
    pair<set<string>::iterator,bool>p;
    p=s.insert("anjoy");
    if(p.second==false)
    {
        cout<<"Can't Inserted"<<endl;
    }
    else
    {
        cout<<"Inserted"<<endl;
    }



}

