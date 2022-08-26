/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <iostream>
using namespace std;
int main()
{
  int l_case=0, u_case=0, digit=0, special=0;
  string str;
  cout<<"Enter input string."<<endl;
  
  cin>>str;
  int i,l=str.length();
  
  for(i=0;i<l;i++)
  {
    if(islower(str[i]))
      l_case=1;
    if(isupper(str[i]))
      u_case=1;
    if(isdigit(str[i]))
      digit=1;
    if(!isalpha(str[i]) && !isdigit(str[i]))
      special=1;  
  }
  
  if(l_case && u_case && digit && special && l>=8)
    cout<<"Strong password."<<endl;
  else if((l_case+u_case+digit+special>=3) && l>=6)
    cout<<"Moderate password"<<endl;
  else
    cout<<"Weak password"<<endl;
    
  
  return 0;
}
