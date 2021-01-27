#include<iostream>
#include<bitset>
#define Size 4
using namespace std;
int main()
{
    bitset<Size> b(string("0011"));
    bitset<Size> c=b;
    cout<<"Real Binary Number: "<<b<<endl;
    b=b<<2;
    cout<<"Left_shift Binary Number: "<<b<<endl;
    b=c>>2;
    cout<<"Left_shift Binary Number: "<<b<<endl;


}



