//حجم التخزين الذي يحتاجه الرقم التالي هو 8 Bytes لأن نوعه Double
//قم بعمل التعديل اللازم لتجعل هذا الرقم Float يطبع لنا حجم التخزين 4 بدلا من 8

// Edit Line To Make 8 Become 4
//cout << sizeof(10.5 + 5 + 20.5 + 10) << "\n"; // 8

#include <iostream>
using namespace std;

int main()
{
    cout <<  sizeof((float)10.5 + 5 +(float) 20.5 + 10) << "\n"; // 4

    return 0;
}