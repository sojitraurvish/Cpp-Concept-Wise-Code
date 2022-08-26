//Unary Operator Overloading

#include<iostream>
using namespace std;

class Index
{
int value;
	public:

	Index()
	{
		value=0;
	}
	int GetIndex()
	{
		return value;
	}
	void operator ++()
	{
		value=value+1;
	}
};
int main()
{
Index idx1,idx2;
++idx1;
++idx1;
cout<<"Index 1 : "<<idx2.GetIndex();
}