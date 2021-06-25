/*Write a program in C++ to swap two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25 */

#include<iostream>
using namespace std;
int main()
{
int a=25, b=39;
int c;
c=a;
a=b;
b=c;
cout<<"After swapping the 1st number is:"<<a<<endl;
cout<<"After swapping the 2nd number is:"<<b<<endl;

}
