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
	ofstream fout;
	
	fout.open("myfile.dat");
	getch();
	fout<<"hello students";
	getch();
	fout.close();
	getch();
}
