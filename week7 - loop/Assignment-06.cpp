#include <iostream>
using namespace std;

int main()
{
  for (int i = 10; i < 1000000000; i = i * i)
    cout << i << "\n";

  cout << "======================== \n";

  int i = 10;
  while (i < 1000000000)
  {
    cout << i << "\n";
    i = i * i;
  }

  return 0;
}