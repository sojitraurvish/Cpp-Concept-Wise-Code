/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class array
{
	private:
		int a[10];
	
	public://protected
		void input(int index,int value)
		{
			a[index]=value;
			cout<<a[index]<<endl;
		}
		
		
		
};

class STACK: private array
{
	private:
		int top;
		
	public:
		STACK(){top=0;}
		void push(int value)
		{
			input(top,value);
			top++;
		}
	
};


int main()
{
	array a1;
	STACK s1;
	
	s1.push(5);
	s1.push(6);
	
}
