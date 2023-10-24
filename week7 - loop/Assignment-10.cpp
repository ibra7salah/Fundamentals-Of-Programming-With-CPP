#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

  for (int i = 0; i < 5; i++)
  {
    if (i == 1 || i == 2)
      continue;

    cout << friends[i] << "\n";
  }

  cout << "======================= \n";

  int i = 0;
  while (i < 5)
  {
    if (i < 1 || i > 2)
    {
      cout << friends[i] << "\n";
    };
    i++;
  }
  return 0;
}