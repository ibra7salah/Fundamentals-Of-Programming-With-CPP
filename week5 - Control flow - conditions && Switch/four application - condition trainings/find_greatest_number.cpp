#include <iostream>
using namespace std;

int main()
{
  int num1,num2,num3;
  cout << "enter num1 \n";
  cin >> num1;
  cout << "enter num2 \n";
  cin >> num2;
  cout << "enter num3 \n";
  cin >> num3;
   
   if (num1 > num2 && num1 > num3 )
    cout << "num1 is greatest ";

  else if (num2 > num1 && num2 > num3 )
        cout << "num2 is greatest ";
        
  else
        cout << "num3 is greatest ";       

  return 0;

}
