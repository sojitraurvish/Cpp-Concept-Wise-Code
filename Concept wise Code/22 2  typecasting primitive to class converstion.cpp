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
		
		complex()
		{
		}
		complex(int a1)
		{
			a=a1;
		}
			
		void output()
		{
			cout<<"a="<<a<<endl;
		}
};

int main()
{
	complex c1;
	int a=15;
	c1=a;//c1=complex(a);
	c1.output();
}
