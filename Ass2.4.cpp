/*14. Write a program in C++ to calculate the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/

#include<iostream>
using namespace std;
int main()
{
int r;
float PI=3.14;
float vol;
cout<<"Enter radius of sphere:";
cin>>r;
vol=(4*PI*r*r*r)/3;
cout<<"Volume of Sphere:"<<vol<<endl;
return 0;
}
