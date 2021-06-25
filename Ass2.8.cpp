//18. Write a program in C++ to find the area of any triangle using Heron's Formula.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,area,s;
cout<<"Enter sides:";
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"area of triangle:"<<endl;
return 0;
}
