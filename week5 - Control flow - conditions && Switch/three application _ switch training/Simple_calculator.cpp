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

    switch (op)
    {
    case 1:
    cout << num_one + num_two;
    break;

    case 2:
    cout << num_one * num_two;
    break;

    case 3:
    cout << num_one - num_two;
    break;

    case 4:
    cout << num_one / num_two;
    break;

  default:
    cout << "operation is not valid "; 
    }
    
  return 0;

}