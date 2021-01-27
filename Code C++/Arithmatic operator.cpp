#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum,sub,mul,rem;
    cout<<"Enter Two Number: ";
    cin>>num1>>num2;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    double div=(float)num1/num2;  //type casting
    rem=num1%num2;
    cout<<"Sum: "<<sum<<endl<<"Substruction: "<<sub<<endl;
    cout<<"Multiplication: "<<mul<<endl<<"Division: "<<div<<endl;
    cout<<"Reminder: "<<rem<<endl;
}
