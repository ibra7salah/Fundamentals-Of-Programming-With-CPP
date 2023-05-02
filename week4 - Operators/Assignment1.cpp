//إستبدل علامة الإستفهام بواحد من ال Arithmetic Operators لتخرج بالنتيجة المطلوبة في حميع الأسطر
//غير مسموح بالتعديل على الأرقام
//غير مسموح بتكرار نفس الحل

#include <iostream>
using namespace std;

int main ()
{
  int num = 3;
  cout << num + num << "\n";                 // 6
  cout << num * num - num << "\n";           // 6
  cout << (--num + num) + num << "\n";         // 6
  cout << (++num + num + num) - num << "\n";   // 6
  cout << (num + num) - (num - num) << "\n"; // 6
  cout << (++num * num) - (++num + num)<< "\n"; // 6
  cout << (++num * num) % (--num + num) << "\n"; // 6

  return 0;

}