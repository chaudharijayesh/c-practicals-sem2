/*Write a C++ Program that illustrate single inheritance.*/
#include<iostream>
using namespace std;
class number1{
public:
int num1;

void input(){
cout<<"Enter Num1"<<endl;
cin>>num1;
}
};
class number2: public number1{
public:
int num2;
void getdata(){
cout<<"Enter Num2"<<endl;
cin>>num2;
}
void display(){
cout<<"--------------------"<<endl;
cout<<"Addition --> num1+num2= "<<num1+num2<<endl;
cout<<"Subtraction --> num1-num2= "<<num1-num2<<endl;
cout<<"Multiplication --> num1*num2= "<<num1*num2<<endl;
cout<<"Division --> num1/num2= "<<num1/num2<<endl;
}
};
int main()
{
number2 n;
n.input();
n.getdata();
n.display();
return 0;
}