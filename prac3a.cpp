/*
Write  C++ Program using classes and object student to print 
name of the student,roll_no, Display the same.
*/
#include <iostream>
using namespace std;
class student{
    public:
char name[30];
int rollno; 
void input(void){
cout<<"Enter name of student"<<endl;
cin>>name;
cout<<"Enter Roll Number of student"<<endl;
cin>>rollno;
}
void output(void)
  {
cout<<"student Name is:- "<<name<<endl;
cout<<"student Roll Number is:- "<<rollno<<endl;
}
};
int main(){
student s;
s.input();
s.output();
    return 0;
}

