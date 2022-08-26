/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class complex
{
	private:
		int a;
		int b;
	public:

		friend ostream& operator<<(ostream&,complex);
		friend istream& operator>>(istream&,complex&);
		
};

	ostream& operator<<(ostream &dout,complex c)
	{
		dout<<"a="<<c.a<<endl<<"b="<<c.b;//we can also use cout 
		return(dout);
	}
	istream& operator>>(istream &din,complex &c)
	{
		din>>c.a>>c.b;
		return(din);
	}

int main()
{
	complex c1;
	
	cout<<"enter value for complex=";
	cin>>c1;//operator>>(cin,c1);
	cout<<"you entered value=";
	cout<<c1;
}
