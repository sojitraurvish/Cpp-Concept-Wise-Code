/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

 #include<iostream>
 #include <string.h>
 #include<conio.h>
 #include<stdio.h>
using namespace std;
 main( )
    {
		int flag=0;
		
		const int no_of_books=10;
       	char libarary[no_of_books][40]= {"Physics","Math","English","Urdu","Biology","Biology",
            "Calculus","Data Base","Automata","Mathematics" };
       
	   	char book_name[10];
		cout<<"\n Enter the name of the book you want to find : ";
       	gets(book_name);

       	for(int count=0;count<no_of_books;count++)
      	{	
        if(strcmpi (&libarary[0][0],book_name) == 0)
        	{
        		flag=1;
           		break;
        	}
      	}

       	if(flag==1)
      	{
        	 cout<<"\n The given book is found and its library number is ";
         	//cout<<count<<endl;
      	}

       	else
      	cout<<"\n The given book is not found "<<endl;

      	 getch();
       	return 0;
    }
