/*15. Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125
*/

#include<iostream>
using namespace std;
int main()
{
int s, vol;

cout<<"Enter side of cube:";
cin>>s;
vol = s*s*s;
cout<<"Volume of cube:"<<vol<<endl;
return 0;
}
