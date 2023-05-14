#include <iostream>
#include <array>
using namespace std;

int main()
{
  array<int,6>nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << sizeof(nums) / sizeof(nums[0])  << "\n";

  // Method 2
  cout <<nums.size() <<"\n" ;


  // Method 3
  cout << end(nums) - begin(nums);

  return 0;
}