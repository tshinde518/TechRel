//25. Write a program in C++ to convert temperature in Kelvin to Celsius.

#include<iostream>
using namespace std;
int main()
{
float kel, cel;
cout<<"Enter temperature in Kelvin:";
cin>>kel;
cel = kel - 273.15;
cout<<"Temperature in celsius:"<<cel<<endl;
return 0;
}
