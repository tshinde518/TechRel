// 51. Write a program in C++ that converts kilometers per hour to miles per hour.

#include<iostream>
using namespace std;
int main()
{
float miph, kmph;
cout<<"Enter distance in kilometer per hour:";
cin>>kmph;
miph=(kmph*0.6213712);
cout <<"The "<< kmph <<" Km./hr. means "<<miph<< " Miles/hr." << endl;
return 0;
}
