 /*Write a C++ Program to design a class having static member function named showcount() which 
has the property of displaying the number of objects created of the class.*/
#include<iostream>
using namespace std;
class test{
int code;
static int count;
public:
void setcode(void){
code=++count;
}
void showcode (void)
{
cout<<"object Number:- "<<code<<endl;
}
static void showcount(void){
cout<<"Count:- "<<count<<endl;

}

};
int test::count;
int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test t3,t4;
    t3.setcode();
    t4.setcode();
    test:: showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    t4.showcode();
    
 return 0;
}