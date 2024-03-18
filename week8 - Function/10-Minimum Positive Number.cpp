#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int numone[], int numtwo)
{
  int result;
  for (int i = 0; i < numtwo; i++)
  {
    if (numone[i] > 0)
    {
      result = numone[i];
    }
  }
  return result;
  return 0;
}

int main()
{
  int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}