/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

// take nothing return somthing.
#include<iostream>

using namespace std;

//int a=10,b=10,c; Globle decleration

int sum();//function declaretion

int main()
{
	int t,x,y;//local decleration

	t=sum();//function call
	cout << t;
}

int sum()//function definition
{
	int c,a=10,b=20;
	c=a+b;
	return c;
}
