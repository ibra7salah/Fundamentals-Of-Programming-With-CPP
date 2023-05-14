#include <iostream>
using namespace std;

int main()
{
  int vals[] = {100, 200, 600, 200, 100};
  int lastindex = sizeof(vals) /sizeof(vals [0]) -1;

  if( (vals [0] == vals[lastindex]) && (vals [1] == vals[lastindex - 1]))
    cout << "Array Is Palindrome \n";
    else
      cout << "Array Is Not Palindrome \n";

  return 0;
}