/*
Write a C++ program to find the volume of a square,cone and rectangle.
*/
#include <iostream>
using namespace std;
int main(){
double r,h,vcone;
double vsquare,s,l,b,height,vrect;
int c;
cout<<"Enter a Choice:- ";
cin>>c;
switch (c)
{
case 1:
    cout<<"Enter a Radius "<<endl;
    cin>>r;
     cout<<"Enter a Height "<<endl;
    cin>>h;
    vcone=(1.0/3.0)*3.14159*(r*r)*h;
    cout<<"Volume of cone is "<<vcone<<endl;
    break;
    case 2:
    cout<<"ENter a sides"<<endl;
    cin>>s;
    vsquare=s*s*s;
    cout<<"Volume of square is "<<vsquare;
break;
case 3:
cout<<"Enter a length "<<endl;
cin>>l;
cout<<"Enter a breadth "<<endl;;
cin>>b;
cout<<"Enter a height "<<height;
cin>>height;
vrect=l*b*height;
cout<<"Volume of rectangle is"<<vrect;
break;
default:
cout<<"Invalid choice ";
    break;
}
   return 0;
}