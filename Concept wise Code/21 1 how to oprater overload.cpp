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
		complex add(complex c)
		{
			complex sum;
			sum.a=a+c.a;
			sum.b=b+c.b;
			return(sum);
		}
};

int main()
{
	complex c1,c2,c3;
	c1.input(5,6);
	c2.input(50,60);
	c3=c1.add(c2);
	c3.display();
}
