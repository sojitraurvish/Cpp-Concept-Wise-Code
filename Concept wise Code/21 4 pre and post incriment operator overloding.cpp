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
		void input(int x)
		{
			a=x;
		
		}
		void display()
		{
			cout <<"a="<<a<<endl;
		}
		
		complex operator++()//pre increment
		{
			complex temp;
			temp.a=++a;
			return(temp);
		}
		
		complex operator++(int)
		{
			complex temp;
			temp.a=a++;
			return(temp);
		}
};

int main()
{
	complex c1,c2;
	c1.input(5);
	c1.display();
	//c2=++c1;//c2=c1.operator++(); pre increment
	//c2=c1++;//c2=c1.operator++(0); post increment
	c1.display();
	c2.display();	
}
