//23. Write a program in C++ that converts kilometers per hour to miles per hour.

#include <iostream>
using namespace std;

int main()
{
    float kmph, miph;
    cout << " Input the distance in kilometer : ";
    cin >> kmph;
	miph = (kmph * 0.6213712);
    cout << " The distance in miles per hour:"<<miph<<endl;

    return 0;
}
