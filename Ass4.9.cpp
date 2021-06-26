//40. Write a program in C++ to print the area and perimeter of a rectangle.

#include <iostream>
using namespace std;

int main()
{
    	int w, l, area, peri;

        cout<<" Input the length of the rectangle : ";
    	cin>>l;
		cout<<" Input the width of the rectangle : ";
    	cin>>w;
    	area=(l*w);
		peri=2*(l+w);
        cout<<" The area of the rectangle is : "<< area << endl;
        cout<<" The perimeter of the rectangle is : "<< peri << endl;
        cout << endl;
        return 0;
}
