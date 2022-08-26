/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main()
{
	ifstream fin;
	char ch;
	
	fin.open("myfile.dat");
	ch=fin.get();//fin>>ch;
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();//fin>>ch;
	}
	fin.close();

}
