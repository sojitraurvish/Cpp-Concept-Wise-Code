/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//composition
#include<iostream>

using namespace std;

class option{
	char smt;
};

class question{
	int qno;
	option *a,*b,*c,*d;
	
	public:
		question(){
			a=new option();
			b=new option();
			c=new option();
			d=new option();
		}
		
		~question(){
			delete a;
			delete b;
			delete c;
			delete d;
		}
};

int main()
{
	question q1;
}
