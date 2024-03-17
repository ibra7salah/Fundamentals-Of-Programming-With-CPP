#include <iostream>
using namespace std;

// Your Function Here
int calculation(int numone, int numtwo=50,int numthree=150)
{
  return numone +numtwo + numthree;
  return 0;
}

int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n"; // 300
  cout << calculation(100) << "\n"; // 300
  return 0;
}