/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

inline int sqr(int);//inline no lakhavi to pan chale.

int main()
{
	int x=10;
	cout <<sqr(x);
	return 0;
}

inline int sqr(int a)
{
	return a*a;
}
