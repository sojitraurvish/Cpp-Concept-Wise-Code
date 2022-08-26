/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class base{

		public:
			base()
			{
				cout<<"base class constractor call"<<endl;
			}	
		
			~base()
			{
				cout<<"base class distractor call"<<endl;
			}
		
};

class derive:public base{

	public:
		derive()  :base()// this is syntex for call base class constructor.when we are'nt calling at that time it is autometicli call. 
		{
			
				cout<<"derive class constractor call"<<endl;
		}
		
		~derive()
		{
				cout<<"derive class distractor call"<<endl;
		}
};


int main()
{
	derive d1;
	
}

//call first derive class constructor but exsiqute first base call constructor
//call first derive class distructor and exciqute and after call & excicute base class distructor 
