#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int money[], int monsize)
{
  float result = 0;
  for (int i = 0; i < monsize; i++)
  {
    result += money[i];
  }
  return result /= monsize;
}

int main()
{
  int money[] = {10, 20, 15, 25, 30, 35};
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}