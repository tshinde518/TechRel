//27. Write a program in C++ to convert temperature in Celsius to Kelvin.

#include<iostream>
using namespace std;
int main()
{
float kel, cel;
cout<<"Enter temperature in celsius:";
cin>>cel;
kel = cel + 273.15;
cout<<"Temperature in kelvin:"<<kel<<endl;
return 0;
}
