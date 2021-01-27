#include<iostream>
#include<bitset>
#define Size 8
using namespace std;
int main()
{
    bitset<Size> b(string("000000"));
    cout<<"Binary Number: "<<b<<endl;
    if(b.any())
        cout<<"true"<<endl;
    else
        cout<<"False"<<endl;
}
