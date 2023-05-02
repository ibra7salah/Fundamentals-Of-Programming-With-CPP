/*
لديك الشرط التالي يعمل بدون أي مشكلة
بدون إستخدام ال Ternary Operator نحتاج لإختصار هذه الشروط لتخرج النتيجة كما في المثال
يجب أن تظهر النتيجة بنفس الترتيب
*/
/*
int age = 40;
int points = 100;

if (age > 18)
{
  cout << "Age Is Ok\n";
  if (points > 50)
  {
    cout << "Points Is Ok\n";
    if (sizeof(age) == 4)
    {
      cout << "Age Data Is 4 Bytes\n";
    }
  }
}

// Output Needed
"Age Data Is 4 Bytes"
"Age Is Ok"
"Points Is Ok"
*/

#include <iostream>
using namespace std;

int main ()
{
  int age = 40;
  int points = 100;

  if (sizeof(age) == 4 && age > 18 && points > 50  )
    cout << "Age Data Is 4 Bytes\n" <<"Age Is Ok\n" <<"Points Is Ok\n";

  return 0;

}