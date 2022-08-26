/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class B;
class A
{
	private:
		int a;
		
	public:
		input(int a1)
		{
			a=a1;
		}
		friend void sum(A,B);
};

class B
{
	private:
		int b;
		
	public:
		input(int b1)
		{
			b=b1;
		}
		friend void sum(A,B);
	
};

void sum(A obj1,B obj2)
{
	cout<<"sum="<<obj1.a+obj2.b;
}

int main()
{
	A obj1;
	B obj2;
	
	obj1.input(30);
	obj2.input(20);
	sum(obj1,obj2);
	
}
