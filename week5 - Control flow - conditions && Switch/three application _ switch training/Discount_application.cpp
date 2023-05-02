#include <iostream>
using namespace std;

int main()
{
  int price = 100;
  int discount = 0;
  int years;

  cout << "type the number of years in company  \n";
  cin >> years;

  switch (years)
{
  case 1:
  discount = 10 ; 
  break;

case 2:
  discount = 20 ;
  break;
  
  case 3:
  discount = 30 ;
  break;

  default:
    cout << "no discount \n" ;

  }

  cout << "the price is "<< price - discount << "\n" ;

  return 0;
  
}