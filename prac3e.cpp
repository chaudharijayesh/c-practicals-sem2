/*Write a C++ Program using copy constructor to copy data of an object to another object*/
#include<iostream>
using namespace std;
class example{
int a,b;
public:
example(int x,int y){
a=x;
b=y;
cout<<"\n I am constructor "<<endl;
}
example(const example & obj){
a=obj.a;
b=obj.b;
cout<<"\n I am copy constructor "<<endl;
}
void display(){
cout<<"\n Values:- "<<a<<"\t"<<b;
}};
int main()
{
   example object (10,20);
example object2(object);
example object3=object;

object.display();
object2.display();
object3.display();
return 0;
}