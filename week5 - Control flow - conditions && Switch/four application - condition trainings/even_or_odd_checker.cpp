#include <iostream>
using namespace std;

int main()
{ int num;
  cout << "enter number \n";
  cin >> num;

  if( num % 2 == 0 )
    cout << num <<" is even";
  else 
    cout << num << "9 is odd";
  return 0;
}