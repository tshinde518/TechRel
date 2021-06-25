/*16. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32
*/

#include<iostream>
using namespace std;
int main()
{
int r,h;
float vol;

cout<<"Enter radius of cylinder:";
cin>>r;
cout<<"Enter height of cylinder:";
cin>>h;
vol = (3.14*r*r*h);
cout<<"Volume of cube:"<<vol<<endl;
return 0;
}
