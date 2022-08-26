/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

int *myarr(int a[])
{
	a[0]=20;
	a[1]=30;
	a[2]=40;
	a[3]=50;
	a[4]=60;
	
	return a;// &a[0] return base address of first element of array
}

int main()
{
	int arr[5];
	int *ptr;
	ptr=myarr(arr);//(&arr[0])
	
	cout <<"after function call"<<endl;
	
		for(int i=0;i<=4;i++)
			cout<<"ptr["<<i<<"]="<<*(ptr+i)/*ptr[i]*/<<endl;
			
	cout<<"================================"<<endl;
		
			for (int i=0;i<=4;i++)
			cout<<"arr["<<i<<"]="<<*(arr+i)/*arr[i]*/<<endl;
}
