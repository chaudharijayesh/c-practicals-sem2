/*Write a C++ Program to create a simple calculator*/
#include <iostream>
using namespace std;
int main(){
char op;
float num1, num2;
cout<<"Enter Two Operands "<<endl;
cin>>num1>>num2;
cout<<"Enter Operator:- +,-,-,/ "<<endl;
cin>>op;
switch (op)
{
case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    break;
case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    break;
case '*':
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    break;
case '/':
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    break;

default: cout<<"Invalid Choice"<<endl;
    break;
}
   return 0;
}