#include <cctype>
#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int num1[], int num2)
{
int result_even;
int result_odd = 1;
int total;
  for (int i = 0; i < num2; i++)
  {
    if (num1[i] % 2 == 0)
    {
      result_even += num1[i];
    }
    else if (num1[i] % 2 != 0)
    {
      result_odd *= num1[i];
    }
  }
  cout <<result_even<<"\n";
  cout <<result_odd<<"\n";
  total = result_even + result_odd;
  return total;
  return 0;
}
int main()
{
  int numbers[] = {10, 20, 3, 30, 5, 7, 40};
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}