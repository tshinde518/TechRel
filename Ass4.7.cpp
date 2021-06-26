// 38. Write a program in C++ that takes a number as input and prints its multiplication table upto 10.

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number:";
cin>>n;
for(int i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}
