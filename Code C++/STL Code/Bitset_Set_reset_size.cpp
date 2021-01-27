#include<iostream>
#include<bitset>
#define Size 10
using namespace std;
int main()
{
    bitset<Size> b(9);
    cout<<"Third index: "<<b[3]<<endl;
    cout<<b<<endl;
    cout<<"size of Bitset: "<<b.size()<<endl;
    cout<<"Count of set: "<<b.count()<<endl;
    cout<<"Count of Reset: "<<b.size()-b.count()<<endl;
}
