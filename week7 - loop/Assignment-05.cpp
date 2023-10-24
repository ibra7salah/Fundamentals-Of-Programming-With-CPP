#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 28; i += 3)
  {
    cout << i << "\n";
  }

  cout << "========================== \n";

  int i = 0;
  while (i < 28)
  {
    cout << i << "\n";
    i += 3;
  }

  return 0;
}