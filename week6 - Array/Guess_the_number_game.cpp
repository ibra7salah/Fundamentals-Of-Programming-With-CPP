#include <iostream>
using namespace std;

int main()
{
  int points = 0;
  int answers [3];

   int sequences [3][5] {
    {1,3,5,7,9},
    {2,4,6,8,10},
    {3,6,9,12,15}};

  cout <<"type the missing number in sequences \n";

  cout <<"sequences 1 \n";
  cout <<"{1,3,5,7,??} \n";
  cin >> answers [0];

  if(answers [0]== sequences [0][4])
  {
    cout << "your first answer is true \n";
    cout << "your points now is "<< ++points << " from 3 \n";
  }else{
    cout <<"your first answer is wrong \n";
    cout << "your points now is "<< points << " from 3 \n";
  }
    

  cout <<"sequences 2 \n";
  cout <<"{2,4,6,8,??} \n";
  cin >> answers [1];

  if(answers [1]== sequences [1][4])
  {
    cout << "your second answer is true \n";
    cout << "your points now is "<< ++points << " from 3 \n";
  }else{
    cout <<"your second answer is wrong \n";
    cout << "your points now is "<< points << " from 3 \n";
  }

  cout <<"sequences 3 \n";
  cout <<"{3,6,9,12,??} \n";
  cin  >> answers [2];

  if(answers [2]== sequences [2][4])
  {
    cout << "your third answer is true \n";
    cout << "your points now is "<< ++points << " from 3 \n";
    cout << "perfect \n";
  }else{
    cout <<"your third answer is wrong \n";
    cout << "your points now is "<< points << " from 3 \n";
  }


  return 0;
}