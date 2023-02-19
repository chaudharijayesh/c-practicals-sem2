/*Write a C++ Program that illustrate multipe inheritance.*/
#include<iostream>
using namespace std;
class number1{ //Base Class 1
public:
int num1;
void input1(){
cout<<"Enter a Num1"<<endl;
cin>>num1;
}
};
class number2{ //Base Class 2
public:
int num2;
void input2(){
cout<<"Enter a Num2"<<endl;
cin>>num2;
}
};
//Derived Class
class output: public number1,public number2{
public:
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
output n;
n.input1();
n.input2();
n.display();
    
    return 0;
}