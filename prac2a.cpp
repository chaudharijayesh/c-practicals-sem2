/*
Write a C++ program to find the greatest of three numbers.
*/
#include <iostream>
using namespace std;
int main(){
int n1,n2,n3,largestnum;
cout<<"Enter Three numbers :-"<<endl;
cin>>n1>>n2>>n3;
largestnum=(n1>n2 && n1>n3)?(n1):(n2>n3)?(n2):(n3);
cout<<"The largest number is "<<largestnum<<endl;

    return 0;
}