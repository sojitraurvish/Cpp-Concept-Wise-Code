/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//don't create confution between function overriding and funcion hidding because both are two diffrent consept
#include<iostream>

using namespace std;

class car
{
	public:
		void shiftgear()
		{
			cout<<"car shiftgear"<<endl;
		}
		void f2()
		{
			cout<<"with out argument f2"<<endl;
		}
		void f3()
		{
			cout<<"base class f3"<<endl;
		}
};

class sportscar : public car
{
	public:
		void shiftgear()//methd or function overriding
		{
			cout<<"sporatscar shiftgear"<<endl;
			car :: shiftgear();
		}
		void f2(int a) //methd or function hiding
		{
			cout<<"with argument f2"<<endl;
		}
};

int main()
{
	sportscar s1;
	
	s1.shiftgear();//child class
	//s1.f2();//error
	s1.f2(5);//child class
	s1.f3();
}

