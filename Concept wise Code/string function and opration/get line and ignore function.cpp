/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

int main()
{
	//int size;
	
	string A,B;
	
	/*cout<<"Enter the size";
	cin>>size;*/
	
	cout<<"Enter the string 1:";
	//cin.ignore();
	getline(cin,A);
	
	cout<<"Enter the string 2:";
	cin.ignore();
	getline(cin,B);
	
	cout<<A<<endl;
	cout<<B;
}
