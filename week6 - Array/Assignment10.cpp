#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << "First: " << nums [0] << "\n" ;
  cout << "Last: " << nums [5] << "\n" ;

  // Method 2
  cout << "First: " << nums.front() <<"\n"; 
  cout << "Last: " << nums.back() << "\n";

  // Method 3
  cout << "First: " << nums.at(0) <<"\n";
  cout << "Last: " << nums[nums.end() - nums.begin()-1] ;

  return 0;
}