// Loop With For - Advanced Trainings

#include <iostream>
using namespace std;

int main()
{

  int nums[] = {100, 200, 300, 400, 500, 600};
  int numsSize = sizeof(nums) / sizeof(nums[1]);

  // assignment 1 - print 100 , 300 , 500

  /* for(int i = 0; i < numsSize; i +=2)
  cout << nums[i] << "\n";*/

  // assignment 2 print 100,300,500 not edit i++

  /* for(int i = 0; i < numsSize; i++ )
  {
  cout << nums[i] << "\n";
   i++; }*/

  // assignment 3 - print 600 , 500 , 400, 300

  /*for(int i = 5; i > 1 ; i-- )
  {
  cout << nums[i] << "\n";
    }*/

  // assignment 4

  int i = numsSize - 1;

  for (;;)
  {
    cout << nums[i] << "\n";
    i--;
    if (i == 1)
      break;
  }

  return 0;
}