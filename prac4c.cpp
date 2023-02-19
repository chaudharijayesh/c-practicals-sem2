
#include <iostream>
using namespace std;
class student{
private:
int rollno;
char name[20];
public:

void read(){
cout<<"Enter Roll number: ";
cin>>rollno;
cout<<"Enter Name: ";
cin>>name;
}
void print(){
    cout<<"Student details: \n";
    cout<<"RollNo= "<<rollno<<endl;
    cout<<"Name= "<<name<<endl;
}
};
int main(){
    student *ptr=new student;
    (*ptr).read();
    (*ptr).print();
    
return 0;
}