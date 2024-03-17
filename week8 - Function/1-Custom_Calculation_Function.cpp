#include <iostream>
using namespace std;

// Write Your Function Here
int calcspecial(int numone, int numtwo)
{
  if (numone == numtwo)
  {
    return numone + numtwo;
  }
  if (numone > numtwo)
  {
    return numone - numtwo;
  }
  if (numone < numtwo)
  {
    return numtwo - numone;
  }
  return 0;
}

int main()
{
  cout << calcspecial(40, 40) << "\n";   // First = Second -> 40 + 40 = 80
  cout << calcspecial(200, 50) << "\n";  // First > Second -> 200 - 50 = 150
  cout << calcspecial(100, 300) << "\n"; // First < Second -> 300 - 100 = 200
  return 0;
}