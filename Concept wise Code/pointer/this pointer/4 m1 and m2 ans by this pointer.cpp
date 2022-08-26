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
    int m1;
    int m2;

  public:
    int set(int m1, int m2)
    {
		cout<<"object address"<<this;
        this->m1 = m1;//(*this).m1=m1;//this-> have address of object subject (s)
        this->m2 = m2;//(*this).m2=m2;
        return (m1 + m2);
    }
    void get()
    {
              // sir why here print Address/garbage
        //cout <<(*this).m1<< endl<<(*this).m2;
        cout <<m1<< endl<<m2;
    }
};
int main()
{
    subject s;//*p=&s;
    cout<<"object address"<<&s;
    int mm1=100, mm2=101;

	cout << s.set(mm1, mm2) << endl;
     s.get();
     
    //cout << p->set(mm1, mm2) << endl;
    //p->get();
}
