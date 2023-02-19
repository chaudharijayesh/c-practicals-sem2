/*Write  C++ program for Structure bank employee to print name of the employee,
account_no. & balance. Display the same also display the balance after withdraw and deposit*/
#include <iostream>
using namespace std;
struct emp{
int accno,deposit,wd,bal=100;
char name[30];
};
int main()
{ emp b;
cout<<"Enter Employee's Details"<<endl;
cout<<"--------------------"<<endl;
cout<<"Enter Name:- "<<endl;
cin>>b.name;
cout<<"Enter Account Number"<<endl;
cin>>b.accno;
int choice;

while(1)
{
cout<<"--------------------"<<endl;
cout<<"Enter choice:- ";
cin>>choice;
switch(choice)
{
case 1: cout<<"Depositing Money"<<endl;
cout<<"Enter Ammount"<<endl;
cin>>b.deposit;
b.bal=b.bal+b.deposit;
cout<<"CURRENT BALANCE IS "<<b.bal<<endl;
break;
case 2:cout<<"Withdrawing Money"<<endl;
cout<<"Enter Ammount"<<endl;
cin>>b.wd;
b.bal=b.bal-b.wd;
cout<<"CURRENT BALANCE IS "<<b.bal<<endl;
break;
case 3: cout<<"Name:- "<<b.name<<endl;
cout<<"Account Number:- "<<b.accno<<endl;
cout<<"Balance "<<b.bal<<endl;
break;
case 4: cout<<"Exit"<<endl;
exit(0);
default: cout<<"Invalid  Choice"<<endl;
break;
}}
return 0;
}