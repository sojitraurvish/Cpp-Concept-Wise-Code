/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
using namespace std;

int main()
{
      int x=5;
      
      int &y=x;//reference variable else internal pointer
      
	  y=10;
      
	  y++;
      
      cout<<y;
}
