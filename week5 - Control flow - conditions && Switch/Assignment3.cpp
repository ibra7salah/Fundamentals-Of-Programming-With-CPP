/*لديك المتغير num وهو عبارة عن مدخل من المستخدم لرقم ما بين 0 و 150
نريد عمل مجموعة من الشروط كالتالي
إذا كان الرقم أصغر من 10 قم بطباعة الرقم وقبله صفرين
إذا كان الرقم أكبر من 10 وأصغر من 100 قم بطباعة الرقم وقبله صفر
إذا كان الرقم أكبر من أو يساوي 100 قم بطباعة الرقم كما هو
شاهد الأمثلة لتفهم الفكرة
*/
/*int num;
cout << "Please Type A Number Between 0 And 150\n";
cin >> num;

 If Number Smaller Than 10 "Example 5" Output Will Be => 005
 If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
 If Number Larger Than 100 "Example 115" Output Will Be => 115
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Please Type A Number Between 0 And 150\n";
  cin >> num;

  if ( num < 10 )
    cout << "00" << num;

  else if ( num > 10 && num < 100)
    cout << "0" << num;

   else
    cout << num ; 


  return 0;

}