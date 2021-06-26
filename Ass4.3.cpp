// 32. Write a program in C++ to check whether a number is positive, negative or zero.

#include<iostream>
using namespace std;
int main()
{
int num;
cout << " Enter a number ";
cin >> num;
 if(num>0)
 {
 cout<<"Entered number is Positive";
 }
 else if(num<0)
 {
 cout<<"Entered number is Negative";
 }
 else
 cout<<"number is Zero";

 return 0;
}
