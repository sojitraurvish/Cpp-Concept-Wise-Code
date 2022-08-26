/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//default constructor and copy constuctor atometicli call

#include<iostream>
using namespace std;
class Base1
{
	protected:
		int a;
	public:
		Base1(int x)
		{
			a = x;
			cout<<"\nBase1 constructor called!";
		}
		~Base1()
		{
			cout<<"\nBase1 destructor called!";
		}
};

class Base2
{
	protected:
		int b;
	public:
		Base2(int y)
		{
			b = y;
			cout<<"\nBase2 constructor called!";
		}
		~Base2()
		{
			cout<<"\nBase2 destructor called!";
		}
};

class Derived: public Base2, public Base1
{
	int c;
	
	public:
		Derived(int i, int j, int k): Base1(i), Base2(j) // Explicit call 
		{
			c = k;
			cout<<"\nDerived constructor called!";
		}
		~Derived()
		{
			cout<<"\nDerived destructor called!";
		}
		void display()
		{
			cout<<"\n\nFirst: "<<a;
			cout<<" Second: "<<b;
			cout<<" Third: "<<c<<"\n";
		}
}; 


int main()
{
	Derived d(10,20,30);
	d.display();
	return 0;
}









