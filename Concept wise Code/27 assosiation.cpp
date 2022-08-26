/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//                    association
//         inheritance           aggregation,composition

//asosiation
#include<iostream>

using namespace std;
class car;

class driver
{
	public:
	void driver1(car &c)
	{
		cout<<"driver"<<endl;	
	}	
};

class car
{
	
};

int main()
{
	driver d1,d2,d3;
	car c1,c2,c3;
	
	d1.driver1(c1);
	d1.driver1(c2);
	
}
