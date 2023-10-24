#include <iostream>
using namespace std;

int main()
{
  int numOne, numTwo;

  cout << "Enter Number One \n";
  cin >> numOne;
  cout << "Enter Number Two \n";
  cin >> numTwo;

  if (numOne > numTwo)
  {
    swap(numOne, numTwo);
  }

  for (int i = numOne + 1; i < numTwo; ++i)
  {
    if (i % 2 == 0)
      continue;
    cout << i << "\n";
  };
  return 0;
}