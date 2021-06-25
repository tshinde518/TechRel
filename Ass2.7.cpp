//17. Write a program in C++ to find the Area and Perimeter of a Rectangle

#include<iostream>
using namespace std;
int main()
{
int l,w;
double area, peri;
cout<<"Enter Length:";
cin>>l;
cout<<"Enter Width:";
cin>>w;
area=l*w;
peri=2*(l+w);
cout<<"area of rectangle:"<<area<<endl;
cout<<"perimeter of rectangle:"<<peri<<endl;
return 0;
}
