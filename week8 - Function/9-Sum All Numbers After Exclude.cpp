#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int numone[], int numtwo, int numthree)
{
  int result = 0;

  for (int i = 0; i < numtwo; i++)
  {
    if (numone[i] == numthree)
    {
      continue;
    }
    else
    {
      result += numone[i];
    }
  }
  return result;
  return 0;
}

int main()
{
  int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}