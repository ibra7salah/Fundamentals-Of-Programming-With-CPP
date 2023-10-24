#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};

  for (int i = 0; i < 6; i++)
  {
    if (i == 2 || i == 4)
      continue;

    cout << names[i] << "\n";
  }

  /* Output Needed
  "Osama"
  "Ahmed"
  "Hagar"
  "Salwa"*/
  return 0;
}