#include <iostream>
using namespace std;

int main()
{
  int i = 100;

  for (;;)
  {
    if (i == 1100)
      break;

    cout << i << "\n";
    i += 100;

    cout << i << "\n";
  }
  /* Output Needed
100
200
200
300
300
400
400
500
500
600
600
700
700
800
800
900
900
1000
1000
1100*/
  return 0;
}