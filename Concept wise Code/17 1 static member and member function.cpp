/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//static is  create only one time for multiple class.
#include<iostream>

using namespace std;

class account
{
	private:
		int balance; //instance member variable
	 	static float roi;// static member variable// class variable//it is declaration
		
	public:
			
		void setroi(int b,float r)//static member function
		{
			balance=b;
			roi=r;
			
			cout <<"balance="<<balance<<endl;
			cout <<"roi="<<roi<<endl;
		}
		
		static void setroi2(/*float r*/)//static member function
		{
			//roi=r;
			
			cout <<"roi="<<roi;//it is use only static variable because it is static.
		}
};

float account:: roi=10; //dafination

int main()
{
	account p1,p2;
	
	p1.setroi(50,60);
	p2.setroi(5,6);
	
	//a1.roi=50; /*if roi is static and define in public  */ cout << a1[0].roi; //when we have object
	//account:: roi=50; /*if roi is static and define in public */cout << account:: roi; //when we doesn't have object
	
	p1.setroi2();
	p2.setroi2(); //call non static member function or call through object
	//account:: setroi(); //call static member function or call through without object
}
