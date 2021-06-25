
//28. Write a program in C++ to find the area of Scalene Triangle.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int s1,s2,angle;
float area;

cout<<"Enter side1:";
cin>>s1;
cout<<"Enter side2:";
cin>>s2;
cout<<"Enter angle:";
cin>>angle;
area = (s1 * s2* sin((3.14/180)*angle))/2;
cout<<" The area of the Scalene Triangle is : "<< area <<endl;

return(0);
}
