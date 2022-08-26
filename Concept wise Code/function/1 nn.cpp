/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

// take nothing return nothing.
#include<iostream>

using namespace std;

//int a=10,b=10,c; Globle decleration

void sum();//function declaretion

int main()
{
	int t;//local decleration
	sum();//Actiual Arguments
	return 0;
}

void sum()//Formal Arguments
{
	int c,a=10,b=20;
	c=a+b;
	cout << c;
}
