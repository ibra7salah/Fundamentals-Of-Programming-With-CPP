#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "Hello ")
{
  string greet;
  if (gender == "Male")
  {
    greet = "Hello Mr " + name;
  }
  else if (gender == "Female")
  {
    greet = "Hello Miss " + name;
  }
  else
  {
    greet = gender + name;
  }
  return greet;
}

int main()
{
  cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n";          // Hello Sameh
  return 0;
}