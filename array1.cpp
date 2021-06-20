#include<iostream>
#include<string>
using namespace std;
int main()
{
string sub[7]={"Maths","Science","Marathi","Hindi","English"};
sub[5]="Histry";
sub[6]="Geography";
 for(int i=0;i<7;i++)
 {
  cout<<sub[i]<<endl;
 }
 return 0;
}
