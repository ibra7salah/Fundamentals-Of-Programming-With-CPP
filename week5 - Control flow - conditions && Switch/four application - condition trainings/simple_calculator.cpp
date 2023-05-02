#include <iostream>
using namespace std;

int main()
{
  int num_one, num_two, op;
  cout << "enter number one \n";
  cin >> num_one;

  cout <<"enter number two \n";
  cin >> num_two ;

  cout << " choose operator \n ";
  cout << " [1] + \n ";
  cout << " [2] * \n ";
  cout << " [3] - \n ";
  cout << " [4] / \n ";
  cin >> op;

  if( op == 1)
    cout << num_one + num_two;

    else if ( op == 2 )
    cout << num_one * num_two;
    
    else if ( op == 3 )
    cout << num_one - num_two;
    
    else if ( op == 4 )
    cout << num_one / num_two;

  else
    cout << "operation is not valid "; 

  return 0;

}