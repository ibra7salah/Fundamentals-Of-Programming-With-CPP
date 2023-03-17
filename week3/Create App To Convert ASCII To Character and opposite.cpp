#include <iostream>
using namespace std;

int main()
{ //  App To Convert ASCII To Character

    int num;
    cout << "enter number or special characters\n";
    cin >> num;
    cout << char (num) << "\n";

//  App To Convert Character To ASCII
    
    char Character;
    cout << "enter character\n";
    cin >> Character;
    cout << int (Character) << "\n";

    return 0;

}