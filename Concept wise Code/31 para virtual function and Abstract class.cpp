/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//do nothing function or para virtual function
//


#include<iostream>
using namespace std;
class Base // Abstract class
	{
	public:
		virtual void display() = 0;
	};

		void Base :: display()
		{
			cout << "Pure Virtual Function!\n";
		}


class Derived: public Base
{ 	
	public:
		void display()
		{
			cout << "Derived class function!\n";
			
		}
};

int main()
{
	Base *b;
	Derived d;
	b = &d;
	b->display();
}
