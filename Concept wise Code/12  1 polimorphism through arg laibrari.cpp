/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
#include<stdarg.h>

using namespace std;

void add(int argc,...)
{
	int num,sum=0;
	
	va_list args;
	va_start (args,argc);
	
	int i;
	for(i=0;i<argc;i++)
	{
		num =va_arg(args,int);
		cout<<num<<endl;
		sum=sum+num;
	}
	
	va_end(args);
	cout<<"sum="<<sum<<endl;
	cout<<"============="<<endl;
	
}

int main()
{
	add(3,1,2,4);
	add(1,10);
	add(5,1,2,3,4,5);
	return 0;
}
