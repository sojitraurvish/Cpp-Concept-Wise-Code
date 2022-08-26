/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;
void fun();

class a
{
	private:
		int *p;
	public:
		void f1()
		{
			p=new int;
		}
		~a()
		{
			delete p;
		}
};

void fun()
{
	a obj;
	obj.f1();
}

int main()
{
	fun();
}
