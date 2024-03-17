#include <iostream>
using namespace std;

// Write Your Function Here
float money(float salary , int days)
{
  int holidays;
  int weeks = days / 7;
  holidays =weeks * 2;
  float moneyneeded = days - holidays;
  return salary / moneyneeded;
  return 0;
  }

int main()
{
  /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */
  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150
  return 0;
}