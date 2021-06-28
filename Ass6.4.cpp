// 54. Write a program in C++ to enter P, T, R and calculate Simple Interest.

#include<iostream>
using namespace std;
int main()
{
int p,t,r,si;
cout<<"Enter the principle:";
cin>>p;
cout<<"Enter rate of interest:";
cin>>r;
cout<<"Enter time:";
cin>>t;
si=p*t*r/100;
cout<<"simple interest:"<<si<<endl;
return 0;
}
