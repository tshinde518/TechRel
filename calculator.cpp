#include<iostream>
using namespace std;
int main()
{
int x,y,c;
cout<<"please enter the value of x:";
cin>>x;
cout<<"please enter the value of y:";
cin>>y;
c=x+y;
cout<<endl<<"Addition of two numbers:"<<c;

c=x-y;
cout<<endl<<"Subtraction of two numbers:"<<c;

c=x*y;
cout<<endl<<"Multiplication of two numbers:"<<c;

c=x/y;
cout<<endl<<"Division of two numbers:"<<c;

c=x%y;

cout<<endl<<"Modulus of two number:"<<c;
return 0;

}
