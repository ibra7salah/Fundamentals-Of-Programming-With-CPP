//لدينا المتغير التالي ونوعه Double
//في السطر الأول نريد إيجاد طريقة لإظهار عدد ال Bytes كما في المثال
//في السطر الثاني نريد إيجاد طريقة لإظهار عدد ال Bits كما في المثال
/*
double salary = 5000.98;
// 8 Bytes
// 64 Bits
*/

#include <iostream>
using namespace std;

int main ()
{
    double salary = 5000.98;
    cout << sizeof(salary) <<" Bytes \n";
    cout << sizeof(salary) *8 <<" Bits \n";
    
    return 0;
}