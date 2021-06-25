//22. Write a program in C++ to find the third angle of a triangle.

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout<<" Input the 1st angle of the triangle : ";
    cin>>a;
    cout<<" Input the 2nd angle of the triangle : ";
    cin>>b;
	c=180-(a+b);
    cout << " The 3rd angle of the triangle is : " << c << endl;
	cout << endl;
    return 0;
}
