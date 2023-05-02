//لديك بعض المتغيرات التي تحتوي على أرقام
//نحتاج لإستخدام ما تعلمته لتخرج لنا كلمة EWS كما في المثال
//ممنوع إستخدام أي قيم خارج قيم المتغيرات الموجودة وممنوع تغيير قيم المتغيرات
//يمكنك إستخدام ال Operator الخاص بالجمع والطرح فقط "+" و "-"

#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 13;
  int c = 17;
  int d = 70;
  
  cout << (char) (d-a);   //69=E
  cout << (char) (d+c);   //87=W
  cout << (char) (d+b);   //83=S

  return 0;

}
// Output Needed
//"EWS"