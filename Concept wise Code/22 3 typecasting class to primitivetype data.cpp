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
		void input(int a11)
		{
			a=a11;
		}
		
		void output()
		{
			cout<<"a="<<a;
		}
		
		operator int()
		{
			return(a);
		}
};

int main()
{
	complex c1;
	
	c1.input(15);
	c1.output();
	
	int x;
	
	x=c1;//x=c1.operator int();//
	
	cout<<x;
}
