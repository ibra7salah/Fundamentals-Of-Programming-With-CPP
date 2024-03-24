#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int num1, int num2, string op = "+")
{
  int total;
  if (op == "+" || op == "a" || op == "add")
  {
    total = num1 + num2;
  }
  else if (op == "-" || op == "s" || op == "subtract")
  {
    total = num1 - num2;
  }
  else if (op == "*" || op == "m" || op == "multiply")
  {
    total = num1 * num2;
  }
  else
  {
    return 0;
  }
  return total;
}

int main()
{
  cout << calculate(10, 20) << "\n";             // 30
  cout << calculate(10, 20, "a") << "\n";        // 30
  cout << calculate(10, 20, "s") << "\n";        // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n";        // 200
  cout << calculate(10, 20, "Invalid") << "\n";  // 0
  return 0;
}