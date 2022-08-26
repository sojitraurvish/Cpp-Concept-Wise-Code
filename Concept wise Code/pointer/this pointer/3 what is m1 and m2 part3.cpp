/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <iostream>
using namespace std;

class subject
{
  private:
    int m1=500;
    int m2=500;
    int n1,n2;

  public:
    int get(int m1, int m2)
    {
        n1=m1;
        n2=m2;
        return (m1 + m2);
    }
    void fun(int m11, int m22)
    {
        int sum=m11+m22;
        cout << sum << endl;
        
        // sir why here print Address/garbage
        int  c = m1 + m2;
        cout << c << endl;
    }
};
int main()
{
    subject s;
    int mm1, mm2;

    cin >> mm1;
    cin >> mm2;

    cout << s.get(mm1, mm2) << endl;

    int m1 = 10, m2 = 10;
    s.fun(m1, m2);
}
