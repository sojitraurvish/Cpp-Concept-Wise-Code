/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class complex
{
	private:
		int a;
	
	public:
		complex(){}
		complex(int a1){
			a=a1;
		}
		
		void output()
		{
			cout<<"a="<<a;
		}
};

class bigcomplex
{
	private:
		int m;
	public:
		void input(int m1)
		{
			m=m1;
		}
		
		operator complex()
		{
			return complex(m);
		}
};





int main()
{
	bigcomplex b1;
	complex c1;
	
	b1.input(10);
	
	c1=b1;//c1=b1.operator complex();
	
	c1.output();
}
