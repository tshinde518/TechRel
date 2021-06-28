// 43. Write a language program which accepts the radius of a circle from the user and compute the area and circumference.

#include<iostream>
using namespace std;
int main()
{
int r;
float area,circum;
cout<<"enter radius of circle:";
cin>>r;
area=3.14*r*r;
circum=2*3.14*r;
cout<<"area of circle:"<<area<<endl;
cout<<"circumference of circle:"<<circum<<endl;
return 0;
}
