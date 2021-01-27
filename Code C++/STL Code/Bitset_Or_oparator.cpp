#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4> a(string("0110"));
    bitset<4> b(string("0011"));
    cout<<"Bitwise Or: "<<(a|b)<<endl;
}


