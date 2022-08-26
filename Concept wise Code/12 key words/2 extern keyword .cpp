/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
#include"extern2.cpp"

using namespace std;

extern int count;//declaration of variable 'count'

int main()
{
	cout<<"count : "<<count<<endl;
	
	count=1;
	
	incrementcount();
	
	cout<<"count : "<<count<<endl;
	
	return 0;
}
