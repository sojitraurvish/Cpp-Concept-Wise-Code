/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//static is  create only one time for multiple class.
#include <iostream>
using namespace std;

class Demo
{
	private:	
		static int X;

	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
		}
};

//defining
int Demo :: X =10;


int main()
{
	Demo X;

	X.fun();//	Demo:: fun(); it is not work in simple member function
	
	return 0;
}
