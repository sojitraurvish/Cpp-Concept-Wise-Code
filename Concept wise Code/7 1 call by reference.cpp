/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
using namespace std;

//int b=10;
//int &a=b; so this is reference variable

int myswap(int &a,int &b)//& take address of x and y
{
      int tmp=a;
      a=b;
      b=tmp;
      
      cout << "in function=" << a << "and"<< b << endl;
}
int main()
{
	int x=5,y=10;
	
	cout << "before call=" << x << "and"<< y << endl;
	
	myswap(x,y); //x and y have value and address
	
	cout << "after call=" << x << "and"<< y << endl;
}
