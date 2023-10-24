#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
  {
    if (i == 500)
      continue;

    if (i > 0 & i < 1000)
      cout << i << "\n";
  }

  /* Output Needed
  100
  200
  300
  400
  600
  700
  800
  900*/

  return 0;
}