#include<iostream>
using namespace std;
int main()
{
int n,i=1,f=1;
cout<<"enter number:";
cin>>n;
while(i<=n)
{
 f=f*i;
 i++;
}
cout<<"Factorial of n is "<<f<<endl;
return 0;
}
