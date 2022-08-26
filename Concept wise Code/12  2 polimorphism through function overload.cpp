/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class number
{
	private:
		int n1;
		int n2;
		
	public:
		void get(int n11,int n22)
		{
			n1=n11;
			n2=n22;
		}
		
		void sum()
		{
			cout<<10;
		}
		
		void sum(int no1,int no2)
		{
			cout<<no1+no2; 
		}
		
		void sum(int no1,int no2,int no3)
		{
			cout<<no1+no2+no3; 
		}
		
};

int main()
{
	number n;
	
	n.sum(10,20,30);
}


