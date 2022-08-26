/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

int & max(int &x,int &y);

int & max(int &x,int &y)// so this function will return reference not (address)
{
	if(x>y)
		return x;
		
	else
		return y;
}

int main()
{
	int a,b,c;
	
	cout<<"enter two integers <a,b>=";
	cin>>a>>b;
	
	max(a,b)=425;
	
	cout<<"value of a and b on execution of max(a,b) =425; ..."<<endl;
	cout<<"a="<<a<<"b="<<b;
}
