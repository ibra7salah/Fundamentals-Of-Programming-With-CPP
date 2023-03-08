#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    int age_in_month = age * 12;
        cout << "age in month "<< age_in_month << " months \n" ;
    int age_in_weeks = age_in_month * 4;
        cout << " age in weeks "<< age_in_weeks <<" weeks \n";
    int age_in_days = age_in_weeks * 7;
        cout << " age in days " << age_in_days << " days \n";
    int age_in_hours = age_in_days * 24;
        cout << " age in hours " << age_in_hours << " hours \n";
    int age_in_minutes = age_in_hours * 60;
        cout << " age in minutes " << age_in_minutes << " minutes \n";
    int age_in_seconds = age_in_minutes * 60;
        cout << " age in seconds " << age_in_seconds << " secondes";

        return 0;

}