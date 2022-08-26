/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//compilar 2 constructer banave default and copy
//default when we are not made any constructer 
//copy when we are not made any copy constructer at that time compilar made it self..
#include<iostream>

using namespace std;

class num
{
	private:
		int n1;
		int n2;
	
	public:
		num()//simple constractor
		{
			cout <<"default constructer call"<<endl;
			n1=10;
			n2=20;	
		}	
	
		num(int no1,int no2=10)//parameter wise constrcter with default argument
		{
			cout <<"parameter wise constructer call"<<endl;
			n1=no1;
			n2=no2;
		}
		
		num(num &obj)//copy constractor
		{
			cout <<"copy constructer call"<<endl;
			n1=obj.n1;
			n2=obj.n2;
		}
		
		~num()//distractor
		{
			cout <<"distructor call"<<endl;
		}
		
		
		void get()//normal function
		{
			cout<<"n1="<<n1<<endl;
			cout<<"n2="<<n2<<endl;
		}
};
int main()
{
	//num();//name lass object
	num n1;
	n1.get();
	
	num n2(100);//impliset call
	//num n2=num(100);//expliset call
	//num n2=100;// when we have only single value
	n2.get();
	
	num n3=n2;
	n3.get();
}
