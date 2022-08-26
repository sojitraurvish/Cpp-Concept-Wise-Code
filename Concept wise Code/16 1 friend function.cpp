/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class sos
{
	private:
		int n1;
		int n2;
		
	public:
			
		
		friend void set(sos&,int,int);
		friend void get(sos);
};

void set(sos &o1,int n11,int n22)
		{
			o1.n1=n11;
			o1.n2=n22;
		}
void get(sos p1)
{
	cout<< "n1="<<p1.n1<<endl;
	cout<< "n2="<<p1.n2<<endl;
}

int main()
{
	sos c1;
	
	set(c1,50,60);
	get(c1);
	
		
}
