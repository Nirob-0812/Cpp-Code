#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4> a(string("1010"));
    bitset<4> b(string("1010"));
    cout<<"Bitwise Equal: "<<(a==b)<<endl;
}
