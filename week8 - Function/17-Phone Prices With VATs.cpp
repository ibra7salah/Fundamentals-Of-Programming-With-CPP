#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int phones, int phonesUsed, int phonesPrice, int vats)
{
  int phonesnew = phones - phonesUsed;
  int phoneUsedprice = phonesPrice - 200;

  phones = phonesnew * phonesPrice;
  phonesUsed *= phoneUsedprice;
  int sales = phones + phonesUsed;
  float tax = float(vats) / 100;
  cout << sales << "\n";
  int moneytaxbefore = tax * sales;
  int moneytaxafter = sales - moneytaxbefore;
  return moneytaxafter;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}