/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <iostream>
using namespace std;

class student
{
  private:
    int en;
    int age;

  public:
    void display()
    {
          en=10;
          age=20;
          cout<<en<<endl;
          cout<<age;
    }
};

int main()
{
      student s1;
      s1.display();
      return 0;
      
}
