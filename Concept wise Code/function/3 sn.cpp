/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

// take somthing return nothing.
#include<iostream>

using namespace std;

//int a=10,b=10,c; Globle decleration

int sum(int,int);//function declaretion

int main()
{
	int x,y;//local decleration
	cout << "enter two number=";
	cin >> x >> y;
	cout << endl;

	sum(x,y);//Actiual Arguments
}

int sum(int a,int b)//Formal Arguments
{
	int c;
	c=a+b;
	cout << c;
}
