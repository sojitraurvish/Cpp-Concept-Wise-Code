/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class bigcomplex
{
	private:
		int m,n;
	public:
		void input(int m1,int n1)
		{
			m=m1;
			n=n1;
		}
		
	
	int getm()
	{
		return(m);	
	}
	int getn()
	{
		return(n);	
	}
	
};

class complex
{
	private:
		int a,b;
		
	public:
		
		
	complex(){}
	complex(bigcomplex b)
	{
		a=b.getm();
		this->b=b.getn();
	}
	
	void output()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
	
};



int main()
{
	bigcomplex b1;
	complex c1;
	
	
	b1.input(5,6);
	
	
	c1=b1;//c1=complex(b1);
	c1.output();
}
