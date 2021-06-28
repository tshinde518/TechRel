//49. Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.

#include<iostream>
using namespace std;
int main()
{
char a;
cout<<"Enter a character:";
cin>>a;
cout <<" The ASCII value of "<<a<<" is: " <<(int)a<< endl;
cout <<" The character for the ASCII value "<<(int)a <<" is: "<<(char)((int)a)
<< endl;
  return 0;
}
