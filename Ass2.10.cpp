//20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.

#include<iostream>
using namespace std;
int main()
{
float frh,cel;
cout<<"Enter temperature in celsius:";
cin>>cel;
frh=(cel*9.0)/5.0+32;
cout<<"Temperature in fahrenheit:"<<frh<<endl;
return 0;

}
