/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<stdio.h>

struct student{
	char name[25];
	int age;
};

int main()
{
	student anil = {"Anil",30};
	
	student *p=&anil;
	
	//anil.age=200;
	(*p).age=200;
	p->age=500;
	
	
	printf("name=%s, age=%d\n",anil.name,anil.age);
}
