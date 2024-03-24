#include <iostream>
using namespace std;

// Write Your Function Here
int books(int books1, int books2, int books3, int shelfs)
{
  int spaces = shelfs * 20;
  // cout << spaces<<"\n";
  int Freespaces = 0;
  books1 *= 2;
  books2 *= 4;
  books3 *= 6;
  int SpacesUsed = books1 + books2 + books3;

  if (spaces > SpacesUsed)
    Freespaces = spaces - SpacesUsed;
  else
    return 0;

  return Freespaces;
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}