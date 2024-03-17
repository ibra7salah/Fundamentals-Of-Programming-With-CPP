#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower (int numone, int numtwo)
{
  cout << pow(numone,numtwo) << "\n";
  cout << 2*2*2*2*2 << "\n";
      int result=1;
  for(int i=0 ; i < numtwo; i++)
  {
      result*=numone;
    }
      cout << result<<"\n";
}


int main()
{
  thepower(2, 5); // 32
  return 0;
}