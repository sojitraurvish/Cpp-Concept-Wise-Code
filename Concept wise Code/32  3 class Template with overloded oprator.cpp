/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <iostream>
// for more tutorials visit www.ProDeveloperTutorial.com


using namespace std;

template <class T>
class Num 
	{ 
	private:
		T number;
	
	public: 
		Num()
		{
			number = 0;
		}
		
		void set_number()
		{
			cout<<"Enter a number"<<endl;
			cin>>number;
		}
		
		Num operator +(Num);
		
		void get_number()
		{
			cout<<number<<endl;
		}
}; 

	template <class T>
	Num <T> Num<T> :: operator +(Num <T> c)
	{
	Num<T> temp;
	temp.number = number + c.number;
	return temp;
	}


int main()
{
	Num <int> n1,n2,n3;
	n1.set_number();
	n2.set_number();
	n3 = n1 + n2;//c3=c1.operator+(c2);
	n3.get_number();
}
