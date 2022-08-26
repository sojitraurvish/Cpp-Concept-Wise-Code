/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

int main()
{
	int **p,nr,nc,r,c;
	
	cout<<"enter value for row and column=";
	cin>>nr>>nc;
	
	p= new int*[nr];
	
	for(r=0;r<nr;r++)
	{
		p[r]=new int[nc];
	}
	
	for(r=0;r<nr;r++)
	{
		for(c=0;c<nc;c++)
		{
			cout<<"a["<<r<<"]["<<c<<"]=";
			cin>>p[r][c];
		}
	}
	
	
	for(r=0;r<nr;r++)
	{
		for(c=0;c<nc;c++)
		{
			cout<<"a["<<r<<"]["<<c<<"]=";
			cout<<p[r][c];
		}
	}
	
}
