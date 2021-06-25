//26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.

#include<iostream>
using namespace std;
int main()
{
float frh,kel;
cout<<"Enter temperature in Fahrenheit:";
cin>>frh;
kel = (5.0 / 9) * (frh - 32) + 273.15;
cout<<"Temperature in Kelvin:"<<kel<<endl;
return 0;
}
