#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "A, h, m, e, d", "Osama", "O, s, a, m, a", "Ameer", "A, m, e, e, r"};

  for (int i = 0; i < 6; i++)
  {
    if (i % 2 != 0)
    {
      cout << "==================\n";

      cout << "== " << friends[i] << " =\n";

      cout << "==================\n\n";
    }

    if (i % 2 == 0)
      cout << "=========\n= " << friends[i] << " =\n";
  };
  /*Output Needed
  =========
  = Ahmed =
  ==================
  == A, h, m, e, d =
  ==================

  =========
  = Osama =
  ==================
  == O, s, a, m, a =
  ==================

  =========
  = Ameer =
  ==================
  == A, m, e, e, r =
  ==================*/
  return 0;
}