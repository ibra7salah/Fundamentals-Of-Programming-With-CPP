#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School";

  cout << fName << mName << lName << "\n";
  cout << fName + mName + lName << "\n";
  cout << fName.append(mName).append(lName);

  /* Output Needed
  Elzero Web School
  Elzero Web School
  Elzero Web School*/

    return 0;

}