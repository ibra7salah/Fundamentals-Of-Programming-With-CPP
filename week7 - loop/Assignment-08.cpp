#include <iostream>
using namespace std;

int main()
{
  int u = 2;

  for (int i = 2; i < 127; i = u + i)
  {
    cout << i << "\n";
    u = u * 2;
  };

  cout << "====================\n";
  u = 2;
  int i = 2;
  while (i < 127)
  {
    cout << i << "\n";
    u = u * 2;
    i = u + i;
  }
  return 0;
}