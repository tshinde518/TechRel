// 52. Write a program in C++ to enter two angles of a triangle and find the third angle.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int ang1,ang2,ang3;
cout<<"Enter 1st angle of triangle:";
cin>>ang1;
cout<<"Enter 1st angle of triangle:";
cin>>ang2;
ang3= 180-(ang1+ang2);
cout<<"3rd angle o triangle is:"<<ang3;
return 0;
}
