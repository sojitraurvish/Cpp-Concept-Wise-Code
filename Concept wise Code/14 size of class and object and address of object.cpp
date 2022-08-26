/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include<iostream>
using namespace std;

class item
{
    private:
    int number;
    float cost;
    
    public:
    //float qty;
    //void getdata(float a,float b);
    //void putdata();
};

int main()
{
    item x;
    cout << &x;// (&) here it work as address oprator not as reference variable
    cout << "size of object = " << sizeof(x) << endl;
    cout << "size of Class = " << sizeof(item) <<endl;
    return 0;
}
