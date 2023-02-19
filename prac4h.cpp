/* Write a C++ Program that illustrate Hierarchical inheritance*/ 
#include<iostream>
using namespace std;
class student{              //Base Class
public:
char name[30];

char add[30];
char rollno[8];
void input1(){
cout<<"Enter Name:- "<<endl;
cin>>name;
cout<<"Enter Roll Number:- "<<endl;
cin>>rollno;
cout<<"Enter Address:- "<<endl;
cin>>add;
cout<<"--------------------"<<endl;
}
};
class aarman : public student{         //Derived Class
public:
void output1(){
cout<<"   Derived Class 1     "<<endl;
cout<<"Name Is :- "<<name<<endl;
cout<<"Roll Number Is :- "<<rollno<<endl;
cout<<"Address Is:- "<<add<<endl;
cout<<"--------------------"<<endl;
}
};
class nikhil : public student{          //Derived Class  
public:
void output2(){
cout<<"   Derived Class 2     "<<endl;
cout<<"Name Is :- "<<name<<endl;
cout<<"Roll Number Is :- "<<rollno<<endl;
cout<<"Address Is:- "<<add<<endl;
cout<<"--------------------"<<endl;
}
};
class hasnain : public student{          //Derived Class  
public:
void output3(){
cout<<"   Derived Class 3     "<<endl;
cout<<"Name Is :- "<<name<<endl;
cout<<"Roll Number Is :- "<<rollno<<endl;
cout<<"Address Is:- "<<add<<endl;
cout<<"--------------------"<<endl;
}
};
class sidhiq : public student{          //Derived Class  
public:
void output4(){
cout<<"   Derived Class 4     "<<endl;
cout<<"Name Is :- "<<name<<endl;
cout<<"Roll Number Is :- "<<rollno<<endl;
cout<<"Address Is:- "<<add<<endl;
cout<<"--------------------"<<endl;
}
};

int main()
{
    aarman a;
    a.input1();
    nikhil n;
    n.input1();
    hasnain h;
    h.input1();
    sidhiq s;
    s.input1();
a.output1();
n.output2();
h.output3();
s.output4();
    return 0;
}