#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "type number \n";
  cin >> num ;

  switch (num)
{
  case 100:
  case 200:
  case 300:
  cout << " congratulation , you won iphone \n";
    break;
    
  case 400:
  case 500:
  cout <<  "congratulation , you won ipad \n";
    break;

  default:
  cout << "no award"; 
}
  return 0;

}