// 46. Write a program in C++ to calculate the volume of a cylinder.

#include<iostream>
using namespace std;
int main()
{
int r, h;
float vol;
cout<<"Enter radius of cylinder:";
cin>>r;
cout<<"Enter height of cylinder:";
cin>>h;
vol=(3.14*r*r*h);
cout<<"Volume of cylinder:"<<vol<<endl;
return 0;
}
