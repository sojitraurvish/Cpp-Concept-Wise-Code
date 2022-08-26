/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <string>
#include <iostream>
using namespace std;

int main() 
{
string test= "qwertyuiop";
char ch[5];
ch[0] =test[0]; // ch is 'Q'
test[18] = 'e'; // we correct misspelling of omnipotent
cout << test << endl;
cout << test[18] << endl;
cout << "ch = " << ch << endl;
return 0;
}
