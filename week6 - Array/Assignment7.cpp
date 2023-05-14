#include <iostream>
using namespace std;

int main()
{
  string names [3][3] = {
      {"Ahmed","Sayed","Mahmoud"},
      {"Sameh","Mahdy","Gamal"},
      {"Mohamed","Adel","Majed"}};

  cout << "First Collection Of Names:\n";
  cout << names[0][0] << "\n"; 
  cout << names[1][1] << "\n"; 
  cout << names[2][2] << "\n"; 

  cout << "Second Collection Of Names:\n";
  cout << names[2][1] << "\n"; 
  cout << names[1][2] << "\n"; 
  cout << names[0][2] << "\n"; 

  cout << "Third Collection Of Names:\n";
  cout << names[0][1] << "\n";  
  cout << names[1][0] << "\n";  
  cout << names[2][0] << "\n";   

  return 0;

}