#include <iostream>
#include <string>
using namespace std;

int main()
 {
  string food = "Pizza";
  string *ptr = &food;
  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";
   // Dereference: Output the value of food with the pointer (Pizza)
  cout << *ptr << "\n";
   // change the value of pointer
    *ptr= "Burger";
    cout<<*ptr<<endl;


  return 0;
}
