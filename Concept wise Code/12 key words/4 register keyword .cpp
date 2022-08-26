/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	time_t start,end;
	
	register int count=1;
	time(&start);
	for(int i=1;i<=5000;i++)
	{
		cout<<count <<endl;
		count++;	
	}	
	
	time(&end);
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout<<"time taken by program is :"<< fixed <<time_taken<<setprecision(5);
	cout<<" sec "<<endl;
	
	return 0;
}
