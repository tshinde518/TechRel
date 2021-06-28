// 57. Write a program in C++ to print the area of a hexagon.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 float s,area;
 cout<<"Enter side of hexagon:";
 cin>>s;
 area= (6*(s*s))/(4*tan(M_PI/6));
 cout<<"The area of the hexagon is: "<<area<<endl;
 return 0;
}
