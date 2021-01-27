#include<iostream>
#include<bitset>
#define Size 4
using namespace std;
int main()
{
    bitset<Size> b(string("1010"));
    cout<<"Real Binary Number: "<<b<<endl;
    b.flip();
    cout<<"Flip Binary Number: "<<b<<endl;

}


