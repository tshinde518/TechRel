
#include<iostream>
#include<string>
using namespace std;

int main()
{
   string firstName = "Maruti ";
  string lastName = "Suzuki";
  string fullName = firstName + lastName;
  string Car_name=firstName + " " + lastName;
  string fullname1=firstName.append(lastName);
  cout << "fullName:"<<fullName<<endl;
  cout << "Car_name:"<<Car_name<<endl;
  cout<<"fullname1:"<<fullname1<<endl;
  string City="Sangli";
  City[3]='p';
  cout<<"length of City is:"<<City.length()<<endl;
  cout<<"size of City is:"<<City.size()<<endl;
  cout<<City[1]<<endl;
  cout<<City[3]<<endl;

  string cartoon;
  cout<<"Enter name:";
  cin>>cartoon;
  cout<<"cartoon name is "<<cartoon<<endl;
    return 0;
}
