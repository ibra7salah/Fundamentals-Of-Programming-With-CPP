#include <iostream>
using namespace std;

int main()
{
  int num = 2;
  num = 3;
  int i = 1;
  while (num < 520)
  {
    cout << i << "\n";

    i = num + i;
    num = num + num;
  }

  /* Needed Output
  1
  4
  10
  22
  46
  94
  190
  382*/

  return 0;
}