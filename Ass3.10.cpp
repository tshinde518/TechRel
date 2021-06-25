// 30. Write a program in C++ to compute the total and average of four numbers.

#include <iostream>
using namespace std;

int main()
{
float n1,n2,n3,n4,tot,avrg;

cout<<" Input 1st two numbers:";
cin>> n1 >> n2;
cout<<" Input last two numbers:";
cin>> n3 >> n4;
tot=n1+n2+n3+n4;
avrg=tot/4;
cout<<" The total of four numbers is : "<< tot << endl;
cout<<" The average of four numbers is : "<< avrg << endl;

return 0;
}
