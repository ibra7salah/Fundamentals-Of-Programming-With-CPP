#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};

  int u = 1;
  int i = 0;
  for (;;)
  {
    if (nums[i] + nums[i] == nums[u])
    {
      if (nums[i] + nums[i] < nums[u] || nums[i] + nums[i] > nums[u])
      {
        continue;
      }

      cout << nums[i] << "\n";
    }

    if (i == 7)
      break;

    u++;
    i++;
  };

  /* Output Needed
  10
  14
  40
  15*/
  return 0;
}