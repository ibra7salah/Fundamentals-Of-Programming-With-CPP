#include <iostream>
using  namespace std;

int main()
{
  int points;

  cout <<"enter your points \n";
  cin >> points ;

  if (points <= 200)
  {
    cout << "your rank is good ";
  }
  else if (points <= 400)  
   {
    cout << " your rank is excellent ";
   }
   else
  { 
      cout << " your rank is dragon ";
  }

return 0;

}