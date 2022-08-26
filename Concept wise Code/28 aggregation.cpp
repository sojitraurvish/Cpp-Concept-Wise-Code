/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//aggregation
#include<iostream>
#include<string.h>
using namespace  std;

class address{
	
	int hno;
	char recydency[20];
	char city[20];
	
	public:
	
		address(int h,char *r,char *c)
		{
			hno=h;
			strcpy(recydency,r);
			strcpy(city,c);
		} 
		
		void displayaddress()
		{
			
			cout<<hno<<endl;
			cout<<recydency<<endl;
			cout<<city<<endl;
		}
};

class person{
	
	char name[20];
	address *p;
	
	public:
		void setaddress(address *ptr,char *n)//n[]
		{
			p=ptr;
			strcpy(name,n);
		}
		
		void display()
		{
			cout<<"name="<<name<<endl;
			p->displayaddress();
		}
};

int main()
{
	address a1(61,"royal","surat");
	
	person urvish,jay;
	
	urvish.setaddress(&a1,"urvish");
	jay.setaddress(&a1,"jay");
	
	urvish.display();
}
