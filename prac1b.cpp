/*Write a c++ Program to covert seconds into hours, minutes, seconds*/
#include <iostream>
using namespace std;
int main(){
int h=0,s=0,m=0;
cout<<"Enter seconds :- "<<endl;
cin>>s;
h=s/3600; //3663/3600=1 ans
s=s%3600; //3663%3600=63
m=s/60; //63/60=1 ans
s=s%60; //63%60=3 ans
cout<<h<<"Hours "<<m<<" Minutes "<<s<<" Seconds "<<endl;
return 0;
}