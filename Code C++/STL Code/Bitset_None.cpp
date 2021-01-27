#include<iostream>
#include<bitset>
#define Size 8
using namespace std;
int main()
{
    bitset<Size> b(string("0001010"));
    cout<<"Binary Number: "<<b<<endl;
    b.set(0);
    b.reset(1);
    cout<<"After Use Function: "<<b<<endl;
    if(b.none())
        cout<<"true"<<endl;
    else
        cout<<"False"<<endl;
}

