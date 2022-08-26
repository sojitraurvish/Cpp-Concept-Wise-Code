/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>

using namespace std;

class number
{
      private:
            int n1;
            int n2;
      public:
            void set(int no1,int no2)
            {
                  n1=no1;
                  n2=no2;
            }
            void get()
            {
                  cout <<"n1="<<n1<<endl;
                  cout <<"n2="<<n2<<endl;
            }
            void sum(number obj1,number obj2)
            {
                  n1=obj1.n1+obj2.n1;
                  n2=obj1.n2+obj2.n2;
            }

};

int main()
{
      number a1,a2,a3;
      
      a1.set(20,30);
      a2.set(400,500);
      
      a1.get();
      cout << "==========="<<endl;
      a2.get();
      
      a3.sum(a1,a2);
      cout << "==========="<<endl;
      a3.get();
      
}
