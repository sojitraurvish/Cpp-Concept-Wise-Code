/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

int main()
{
	//implicit typecasting
	int a;
	float b=3.14;
	a=b;
	cout<<"a="<<a;
	
	//explicit typecasting
	
	int c=3;
	float d;
	d=float(c)/2;
	
	cout<<"d="<<d;
}
