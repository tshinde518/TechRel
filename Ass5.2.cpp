//42. Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.

#include<iostream>
#include<string>
using namespace std;
int main()
{
string a,b;
cout<<"Enter first name:";
cin>>a;
cout<<"Ener last name:";
cin>>b;
cout<<"Name in reverse is: :"<<b<<" "<<a<<endl;
return 0;
}
