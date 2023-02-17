/*
Write a C++ program to find the sum of the even and odd n natural numbers.
*/
#include <iostream>
using namespace std;
int main(){
int n,eve=0,odd=0,i;
cout<<"Enter a Range ";
cin>>n;
for(i=0;i<=n;i++)
{
if (i%2==0)
{
    eve=eve+i;
    cout<<i<<endl;
}
else{
odd=odd+i;
cout<<i<<endl;
}
}
cout<<"Sum of even Number is "<<eve<<endl;
cout<<"Sum of odd Number is "<<odd<<endl;
   return 0;
}