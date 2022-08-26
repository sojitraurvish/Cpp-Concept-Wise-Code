/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

int main()
{
	int size,i;
	int *ptr;
	
	cout <<"enter size an array=";
	cin>>size;
	
	ptr=new int[size];
	
	for(i=0;i<size;i++)
	{
		cout<<"ptr["<<i<<"]=";
		cin>>ptr[i];
	}
	cout<<"========================="<<endl;
	
	for(i=0;i<size;i++)
	{
		cout<<"ptr["<<i<<"]="<</*ptr[i]*/*(ptr+i)<<endl;
	}
	
	cout<<"======after delete======="<<endl;
	
	delete []ptr;//ptr
	
	for(i=0;i<size;i++)
	{
		cout<<"ptr["<<i<<"]="<<ptr[i]<<endl;
	}
}
