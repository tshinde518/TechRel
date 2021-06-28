// 44. Write a language program to get the volume of a sphere with radius 6.

#include<iostream>
using namespace std;
int main()
{
int r;
float vol;
cout<<" Input the radius of a sphere : ";
cin>>r;
vol=(4*3.14*r*r*r)/3;
cout<<" The volume of a sphere is : "<< vol << endl;

return 0;
    }
