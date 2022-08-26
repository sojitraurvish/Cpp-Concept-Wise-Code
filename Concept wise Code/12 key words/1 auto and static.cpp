/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

void func();

int main()
{
	auto int n=1;
	
	while(n<=10)
	{
		func();
		n++;
	}
	return 0;
		
}

void func()
{
	static int i=5;
	i++;
	cout<<"i is"<<i<< endl;
}
