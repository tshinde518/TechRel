//58. Write a program in C++ to print the area of a polygon.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 float s,area,n;
 cout<<"Enter number of sides of polygon:";
 cin>>n;
 cout<<"Enter length of side of polygon:";
 cin>>s;
 area= (n * (s * s)) / (4.0 * tan((M_PI / n)));
 cout<<" The area of the ploygon is: "<<area<<"\n";
 return 0;
}
