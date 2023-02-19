#include <iostream>
using namespace std;
class complex{
double real;
double imag;
public: 
complex operator+( complex a){
complex temp;
temp.real=real+a.real;
temp.imag=imag+a.imag;
return temp;
}
complex operator*(complex c){
double real1,real2;
real1=real;
real2=c.real;
real=(real*c.real)-(imag*c.imag);
imag=(real1*c.imag)+(imag*real2);
complex temp;
temp.real=real;
temp.imag=imag;
return temp;
}
void display(){
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
void set(){
cout<<"Enter real: "<<endl;
cin>>real;
cout<<"Enter imag: "<<endl;
cin>>imag;
}
};
int main(){
int o;
complex c,c1,c2;
c1.set();
cout<<"Enter 2nd complex no: "<<endl;
c2.set();
cout<<"Select operation\n 1.Addition \n 2.Multiplication"<<endl;
cin>>o;
switch(o){
case 1: {
    c=c1+c2;
    c.display();
}
break;
case 2: {

    c=c1*c2;
    c.display();
}
break;
default:
cout<<"Invalid Choice";
break;
}

   return 0;
}