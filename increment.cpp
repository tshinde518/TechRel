#include<iostream>
using namespace std;
int main()
{
int number=57;

cout<<"after post increment by 1: " << number++<<endl;
cout<<"after pre increment by 1: " << ++number<<endl;
number +=1;
cout<<"after increasing the number by 1: "<<number<<endl;
number--;
cout<<"after post decrement by 1: " << number<<endl;
cout<<"after pre decrement by 1: " << --number<<endl;
number -=1;
cout<<"after decreasing the number by 1: "<<number<<endl;
return 0;

}
