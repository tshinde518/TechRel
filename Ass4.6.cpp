// 36. Write a program in C++ to test the Type Casting.
#include<iostream>

using namespace std;
int main()
{
int a = 4, b = 8;
   cout << a / b << endl;
   cout << (double)a / b << endl;
   cout << a/ (double)b << endl;
   cout << (double)(a/b) << endl;

double c = 5.5, d = 6.6;
   cout<<"\nTest implicit type casting :\n" ;
   cout << (int) (c / d) << endl;
   cout << (int)(c / b) << endl;
   cout <<"\n int implicitly casts to double: \n";
   c = a;
   cout << c << endl;
   cout<<"double truncates to int!: \n";
   b = d;
   cout << b << endl;
}
