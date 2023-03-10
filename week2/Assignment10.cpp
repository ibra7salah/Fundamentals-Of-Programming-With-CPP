//نريد عمل متغيريين عبارة عن المدخلات من المستخدم
//المستخدم يقوم بإدخال رقم وبعده رقم آخر
//المطلوب ايجاد حاصل ضرب الرقمين في بعضهم
//شاهد المثال لترى النتيجة المطلوبة

#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
  int numberOne;
  
  int numberTwo;

  cout << " Number One => 10 \n ";

  cin >> numberOne;

  cout << " Number One => 100 \n ";

  cin >> numberTwo ;

  cout << numberOne * numberTwo;
  // Number One => 10
  // Number Two => 100
  // Needed Output 1000 [10 * 100]
  return 0;
}