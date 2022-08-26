/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;
void lol(int no1,int no2=20)//default argument
{
	if(no1==no2)
		{
			cout<<"equal";
		}
		else
		{
			cout<<"not equal";
		}
}
		


int main()
{
	
	lol(20);
	return 0;
}

