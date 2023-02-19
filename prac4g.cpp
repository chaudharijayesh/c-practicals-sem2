/*Write a C++ Program that illustrate multi level inheritance.*/
#include <iostream>
using namespace std;
class number1 
{
 	public:
 	int num1;
 	void input1()
 	{
    	cout << "Enter value of num1= "; 
     cin >> num1;
 	}
};
class number2 : public number1
{
 	public:
 	int num2;
 	void input2()
 	{
 	    cout << "\nEnter value of num2= ";
     cin >> num2;
 	}
};
class number3 : public number2     
{
 	private:
 	int num3;
 	public:
 	void input3()
 	{
    	cout << "\nEnter value of num3= ";
     cin >> num3;
 	}
 	void output()
 	{ 
 	    cout << "\nAddition--> num1+num2+num3= " << num1 + num2 + num3;
cout << "\nMultiplication--> num1*num2*num3= " << num1 * num2 * num3;
 	}
};
int main()
{
     number3 a;      //object of derived class
     a.input1();
     a.input2();
     a.input3();
     a.output();
     return 0;
}