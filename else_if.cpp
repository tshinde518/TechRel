#include<iostream>
using namespace std;
int main()
{
int time = 25;
if (time < 10)
{
  cout << "Good morning.";
} else if (time < 22)
{
  cout << "Good day.";
} else
{
  cout << "Good evening.";
}

return 0;
}
