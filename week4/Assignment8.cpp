//إستخدم ال Increment وال Decrement Operators على المتغيرات لتخرج بالنتيجة المطلوبة
//كل سطر مرتبط بالذي قبله


#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  cout << -- num << " | " << num ++ << " | " << ++ num << "\n"; // 9 | 9 | 11
  cout << num << " | " << ++ num << " | " << num << "\n";       // 11 | 12 | 12
  cout << -- num << " | " << -- num << " | " << -- num << "\n"; // 11 | 10 | 9

  return 0;

}
