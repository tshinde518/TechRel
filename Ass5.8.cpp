// 48. Write a program in C++ which swap the values of two variables not using third variable.

#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter 1st number:";
cin>>a;
cout<<"enter 2nd number:";
cin>>b;
a=a*b;
b=a/b;
a=a/b;
cout<<"After swapping the 1st number is:"<<a<<endl;
cout<<"After swapping the 2nd number is:"<<b<<endl;
return 0;
}
