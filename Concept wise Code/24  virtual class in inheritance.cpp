/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class a
{
	public:
		int a;
};

class b: virtual public a
{
	public:
		int b;
};

class c: virtual public a
{
	public:
		int c;
};

class d : public b,public c
{
	public:
		int total;
};

int main()
{
	d d1;
	
	d1.a=5;
	d1.b=10;
	d1.c=15;
	
	d1.total=d1.a+d1.b+d1.c;
	
	cout<<"total is="<<d1.total;
}

