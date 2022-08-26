/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//friend function create multiple time with class.
#include<iostream>

using namespace std;

class b;//declere class

class a
{
	private:
		char ch='a';
		int num=11;
		
	public:
		friend class b;
		
};

class b
{
	public:
		
		void display(a obj1)
		{
			cout<<obj1.ch<<endl;
			cout<<obj1.num<<endl;
		}
};

int main()
{
	a obj1;
	b obj2;
	
	obj2.display(obj1);
	return 0;
}
