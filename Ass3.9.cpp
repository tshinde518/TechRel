//29. Write a program in C++ to compute quotient and remainder.

#include <iostream>
using namespace std;

int main()
{
int dividend, divisor, quotient,remainder;

cout<<" Input the dividend : ";
cin>>dividend;
cout<<" Input the divisor : ";
cin>>divisor;
quotient=dividend / divisor;
remainder=dividend % divisor;
cout<<" The quotient of the division is : "<< quotient << endl;
cout<<" The remainder of the division is : "<< remainder << endl;

return 0;
    }
