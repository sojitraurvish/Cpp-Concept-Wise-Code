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
    void get()
    {
        cout << " enro.no=";
        cin >> en;
        cout << " age=";
        cin >> age;
    }
    void set()
    {
        cout << " enro.no=";
        cout << en;
        cout << " age=";
        cout << age;
    }
};
int main()
{
    student s1;
    s1.get();
    s1.set();
    return 0;
}
