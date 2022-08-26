/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class student
{
	private:
	
	public:
	 int lol(int,int);	
};
int main()
{
	
	student s1;
	cout <<s1.lol(20,30);
	
}

inline int student:: lol(int a,int b)
{
	return (a+b);
}
