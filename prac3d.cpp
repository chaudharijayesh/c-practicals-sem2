/*Write a Program to find Maximum out of Two Numbers using friend function.
Note: Here one number is a member of one class and the other number is member of some other 
class*/
#include<iostream>
using namespace std;

void max();
class num1{
int n1;
public:
num1(){
cout<<"Enter Number 1:- ";
cin>>n1;
}
friend void max();
};
class num2{
int n2;
 public:
num2(){
cout<<"Enter Number 2:- ";
cin>>n2;
}
friend void max();
};
void max()
{
num1 a1;
num2 a2;
if(a1.n1>a2.n2)
cout<<"Number 1 maximum out of two numbers";
else if(a1.n1==a2.n2)
cout<<"Numbers are equal";
else
cout<<"Number 2 maximum out of two numbers";

}
int main()
{
  max();
    
 return 0;
}