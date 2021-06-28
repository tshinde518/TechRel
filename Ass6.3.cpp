// 53. Write a program in C++ to calculate area of an equilateral triangle.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float s,area;
cout<<"Enter side of Equilateral triangle:";
cin>>s;
area=s*s*sqrt(3)/4;
cout<<"area of equilateral triangle:"<<area<<endl;
return 0;
}
