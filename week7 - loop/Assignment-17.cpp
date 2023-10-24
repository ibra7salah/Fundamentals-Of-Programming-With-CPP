#include <iostream>
using namespace std;

int main()
{
  int nums[] = {0, 0, 1};
  int i = 0;
  int u = 1;
  int y = 2;

  for (;;)
  {
    cout << nums[i] << nums[u] << nums[y] << "\n";

    if (nums[y] < 10)
    {
      nums[y]++;
      if (nums[y] == 10)
      {
        nums[u]++;
        nums[y] = 0;
      }
      if (nums[u] == 2 & nums[y] == 1)
      {
        nums[u] = 0;
        nums[i] = 1;
        nums[y] = 0;
      }
    }
    if (nums[i] == 1 & nums[u] == 0 & nums[y] == 3)
      break;
  }
  /* Output Needed
001
002
003
004
005
006
007
008
009
010
011
012
013
014
015
016
017
018
019
020
100
101
102*/
  return 0;
}