/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <iostream>
using namespace std;
template < typename T1, typename T2 >
T2 product( T1 x, T2 y)
{
return (T2)(x * y);
}
int main()
{
cout << product<int,int>(3, 4.7) << endl;
cout << product(4, 5.6) << endl;
return 0;
}
