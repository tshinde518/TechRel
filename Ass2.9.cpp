//19. Write a program in C++ to find the area and circumference of a circle.

#include<iostream>
using namespace std;
int main()
{
int r, PI=3.14;
float area, circum;
cout<<"Enter redius:";
cin>>r;
circum=2*PI*r;
area=PI*r*r;
cout<<"area of circle:"<<area<<endl;
cout<<"Circumference of circle:"<<circum<<endl;
return 0;
}
