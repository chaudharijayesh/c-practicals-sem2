/*
write a C++ program to genrate all the prime number between 1 and n, 
where n is a value supplied by the user.
*/
#include <iostream>
using namespace std;
int main(){
int i,k,num;
cout<<"Enter a Range"<<endl;
cin>>num;
for(i=2;i<num;i++)
{
    for ( k= 2; k<i; k++)
    {
    if(i%k==0){
        cout<<"";
        break;
    }
    }
    if(k==i){
        cout<< k <<" ";
    }
}
   return 0;
}