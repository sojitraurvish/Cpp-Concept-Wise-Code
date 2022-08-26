/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<stdio.h>
int main()
{
	
	int i=100,l=100;
	int *ptr;
	//ptr+1;
	ptr=&i;
	*ptr=7;
	

	int **ptr2;
    ptr2=&ptr;
    //**ptr2= 8;
	
	printf("\n\n%d\n\n",i);		
	printf("%u\n\n",&i);	
	printf("%u\n\n",ptr);
	printf("%u\n\n",&ptr);
	printf("%u\n\n",*(&ptr));
		//printf("%u\n\n",ptr2);
      	//printf("%u\n\n",&ptr2);
      	//printf("%u\n\n",**ptr2);
	printf("%d\n\n",*ptr);
	printf("%d\n\n",*&i);
	
	//*ptr++ it is incriment i address
	//++(*ptr) is is incriment i th first value
	
	//*ptr=l;
	//*ptr=*P;
}
