/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

//int l=strlen(str);
//int l=str.length();

#include<iostream>

using namespace std;

void display(char *st[]);//(char *) when we use this at that time function header has (char s) is not work.
void display(string s);

int main()
{

char str0[]="h1";

char str1[]={'h','i','\0'};

char str2[4]="hel";

char str3[5]={'h','e',' ','l','\0'};

string str;

 cout << "Enter a string: ";
//cin>>str3;
cin.getline(str2,4); //cin.get(str2,4)//when we have size of array.
//getline(cin,str);


cout<<"str0:"<<str0<<endl;
cout<<"str1:"<<str1<<endl;
cout<<"str2:"<<str2<<endl;
cout<<"str3:"<<str3<<endl;
cout<<"str:"<<str<<endl;

cout<<"======================"<<endl;
display(str1);//(&str1[0]);
display(str);

}


void display(char s[])//(char *s[])(char s) this all are convert in -------->(char *s)
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
    cout << "Entered string is: " << s << endl;
}

