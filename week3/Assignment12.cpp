//لديك مجموعة من المتغيرات يجب عدم التعديل عليهم
//لديك مجموعة من السطور كل سطر يخرج قيمة معينة
//المطلوب إستبدال علامة الإستفهام بشيء مما تعلمته لتخرج النتيجة المطلوبة
//ممنوع إستخدام اي شيء بعيدا عن المتغيرات
//ممنوع تغيير العلامات الخاصة بالجمع والطرح والضرب


#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit Here
  short a = 1000;
  int b = 10000;
  long double c = 5.560000505012;

  // Change ??? To Something Else To Get The Output
  cout << sizeof (c) - sizeof (b) << "\n"; // 12
  cout << sizeof (b) + sizeof (c) << "\n"; // 20
  cout << sizeof (c) * sizeof (a) << "\n"; // 32
  cout << a * (int)c << "\n"; // 5000

  cout << char ( sizeof( (long double) (b))  * int (c) ) << "\n"; // P

  return 0;

}