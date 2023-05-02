/*لديك المتغيرات التالية الخاصة بالعمر والنقاط والتقييم
نريد عمل مجموعة من الشروط كالتالي
في حالة السن أكبر من 18 نقوم بكتابة “Yes Age Is Ok”
في حالة السن ليس أكبر من 18 نقوم بكتابة “No Age Is Not Ok”
في حالة النقاط أكبر من 500 نقوم بكتابة “Yes Points Is Ok”
في حالة النقاط ليست أكبر من 500 نقوم بكتابة “No Points Is Not Ok
*/

 /* Test Case 1
int age = 18;
int points = 450;

  Output
"No Age Is Not Ok"
"No Points Is Not Ok"

 Test Case 2
int age = 20;
int points = 450;

  Output
"Yes Age Is Ok"
"No Points Is Not Ok"

 Test Case 3
int age = 20;
int points = 650;

  Output
"Yes Age Is Ok"
"Yes Points Is Ok" */

#include <iostream>
using namespace std;

int main()
{
  int age;
  int points;

  cout <<"type your age \n";
  cin >>age;

  cout << "type your points \n";
  cin >>points;

  if (age < 18 && points < 500 )
    cout <<" No Age Is Not Ok \n No Points Is Not Ok";

    else if  (age > 18  && points < 500)
      cout << " Yes Age Is Ok \n No Points Is Not Ok";

    else if (age > 18 &&  points > 500)
      cout << " Yes Age Is Ok \n yes Points Is  Ok";
  
  
  return 0;

}