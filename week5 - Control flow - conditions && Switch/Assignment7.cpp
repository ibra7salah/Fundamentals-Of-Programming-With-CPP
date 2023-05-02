/*لدينا مجموعة من المتغيرات عبارة عن مدخلات من المستخدم
سيقوم المستخدم بكتابة 4 أرقام متتالية
إذا كان الرقم أصغر من 20 وعدد زوجي سوف نقوم بإضافته للعملية الحسابية
نبدا المتغير result بقيمة صفر وإذا كتب المستخدم رقم توفرت فيه الشروط نجمعه مع الصفر وهكذا
وفي النهاية نقوم بطباعة قيمة المتغير result شاهد المثال والتجارب لتفهم الفكرة
*/

/*int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 5 Number In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;
*/
/*
  Test Case 1
  Numbers => 15, 16, 22, 8
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 15 => Not Even Number
  [Number 2] 16 => Smaller Than 20 And Even Number
  0 + 16 = 16
  [Number 3] 22 => Not Smaller Than 20
  [Number 4] 8  => Smaller Than 20 And Even Number
  16 + 8 = 24

  =================================

  Test Case 2
  Numbers => 100, 11, 12, 18
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 100 => Not Smaller Than 20
  [Number 2] 11  => Not Even Number
  [Number 3] 12  => Smaller Than 20 And Even Number
  0 + 12 = 12
  [Number 4] 18  => Smaller Than 20 And Even Number
  12 + 18 = 30
*/

#include <iostream>
using namespace std;

int main()
{
  int result = 0;
  int num1, num2, num3, num4;
  cout << "Please Type 4 Number In A Row\n";
  cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
  cin >> num1 >> num2 >> num3 >> num4;
  
  if (num1 % 2 == 0 && num1 < 20)
      result = num1;
  else 
      cout << "number1 is not valid \n";

  if (num2 % 2 == 0 && num2 < 20)
      result += num2;
  else 
      cout << "number2 is not valid \n";
  
    
  if (num3 % 2 == 0 && num3 < 20)
      result += num3;
  else 
      cout << "number3 is not valid \n";
  
    
  if (num4 % 2 == 0 && num4 < 20)
      result += num4;
  else 
      cout << "number4 is not valid \n";



  
  cout << "numbers = "<< num1 <<","<< num2 <<","<< num3 << ","<< num4 <<"\n";
  cout <<"result = " << result;

  



  return 0;
}