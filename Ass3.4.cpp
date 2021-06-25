//24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

#include<iostream>
using namespace std;
int main()
{
float frh,kel;
cout<<"Enter temperature in Kelvin:";
cin>>kel;
frh = (9.0 / 5) * (kel - 273.15) + 32;
cout<<"Temperature in fahrenheit:"<<frh<<endl;
return 0;
}
