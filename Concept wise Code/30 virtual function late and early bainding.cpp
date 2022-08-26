/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//virtual function
#include<iostream>

using namespace std;

class base
{
	public:
		virtual void display()
		{
			cout<<"Base class!\n";
		}
};
	
class derived: public base
{
	private:
		virtual void display()
		{
			cout<<"Derived class!\n";
		}
};


int main()
{
	base *b;
	derived d;
	b = &d;
	b->display();
	return 0;
}




















































//								   polimorphism

//					complietime                   runtime

//  function o.l  , operator o.l ,  template			   overriding

//template		                  
// function,class,class with o.l oprator  


