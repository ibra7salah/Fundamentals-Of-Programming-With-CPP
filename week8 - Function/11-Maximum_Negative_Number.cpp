#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numone[], int numtwo)
{
  int result =-100;
  for (int i = 0; i < numtwo; i++)
  {
    if (numone[i] < 0 && numone[i] > result)
    {
      result = numone[i];
    }
  }
  return result;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}
