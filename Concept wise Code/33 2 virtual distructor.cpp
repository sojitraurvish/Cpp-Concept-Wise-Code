/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

 #include<iostream>
using namespace std;
class base
{
	public:
	virtual ~base() = 0;
};

	base::~base()
	{
	cout<<"Destructor of base class invoked!\n";
	}

class derived: public base
{
	public:
	~derived()
	{
	cout<<"Destructor of derived class invoked!\n";
	} 
};

int main()
{
base* b = new derived; // Upcasting
delete b;
return 0;
}
