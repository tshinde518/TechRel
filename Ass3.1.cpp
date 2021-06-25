//21. Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include<iostream>
using namespace std;
int main()
{
float frh,cel;
cout<<"Enter temperature in Fahrenheit:";
cin>>cel;
cel = 5 * (frh - 32) / 9;
cout<<"Temperature in celsius:"<<cel<<endl;
return 0;
}
