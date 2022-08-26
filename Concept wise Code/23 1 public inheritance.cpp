/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class base
{
	private:
		int a;
	
	public://protected
		void setdata(int a1)
		{
			a=a1;
		}
		
};

class derive: public base
{
	public:
		void setvalue(int a11)
		{
			a=a11;
			//setdata(a11);
		}
};


int main()
{
	base c1;
	derive d1;
	
	d1.setvalue(5);
}
