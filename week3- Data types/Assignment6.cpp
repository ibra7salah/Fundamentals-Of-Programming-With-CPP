//لديك 6 متغيرات نوعهم int ونريد طباعة ال Character الذي يمثله هذا الرقم
//نحتاج لأن تكون الرسالة كما في المثال ولا تكتب القيمة بيدك وإستخدم المتغيرات
//في السطر الأخير إستخدم قيم المتغيرات لتخرج بالكلمة المطلوبة "Elzero"

#include <iostream>
using namespace std;
int main ()
{
  int a = 69;
  int b = 108;
  int c = 122;
  int d = 101;
  int e = 114;
  int f = 111;

  cout << "Character Of This ASCII Value 69 Is "<< (char) 69 << endl;
  cout << "Character Of This ASCII Value 108 Is "<< (char) 108 << endl;
  cout << "Character Of This ASCII Value 122 Is "<< (char) 122 << endl;
  cout << "Character Of This ASCII Value 101 Is "<< (char) 101 << endl;
  cout << "Character Of This ASCII Value 114 Is "<< (char) 114 << endl;
  cout << "Character Of This ASCII Value 111 Is "<< (char) 111 << endl;

  cout << (char) 69<<(char)108<<(char)122<<(char)101<<(char)114<<(char)111 ;


  return 0;
}
// Output Needed
/*"Character Of This ASCII Value 69 Is E"
"Character Of This ASCII Value 108 Is l"
"Character Of This ASCII Value 122 Is z"
"Character Of This ASCII Value 101 Is e"
"Character Of This ASCII Value 114 Is r"
"Character Of This ASCII Value 111 Is o"
*/
// Output Needed In Last Line
//"Elzero"