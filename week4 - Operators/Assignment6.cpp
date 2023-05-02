//إستبدل علامة الإستفهام بواحد من ال Operators الموجودة في التعليقات لتكون النتيجة دائما True
//يجب أن تحتوي الحلول على جميع ال Operators الموجودة في التعليقات

/*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 25;
  int c = 15;

  cout << (a < b) << "\n";          // True
  cout << (c > a) << "\n";          // True
  cout << (a + c == b) << "\n";     // True
  cout << (c >= a) << "\n";         // True
  cout << (c <= b) << "\n";         // True
  cout << (b || a || b == c) << "\n"; // True
  cout << ! (a == b) << "\n";         // True
  cout << (a && b == b && a) << "\n"; // True
  return 0;
}