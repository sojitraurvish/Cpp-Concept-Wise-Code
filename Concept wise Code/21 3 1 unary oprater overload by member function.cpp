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
		int a,b;
		
	public:
		void input(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout <<"a="<<a<<endl<<"b="<<b<<endl;
		}
		complex operator-()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return(temp);
		}
};

int main()
{
	complex c1,c2;
	c1.input(5,6);
	c2=-c1;//c2=c1.operator-();
	c2.display();
}
