#include <iostream>
using namespace std;

// Write Your Function Here'
string createurl(string text1, string text2, string text3, bool text4 = true)
{
  string url = "";
  if (text4 == true)
  {
    url = text1 + "://www." + text2 + "." + text3 + "\n";
  }
  else
  {
    url = text1 + "://" + text2 + "." + text3 + "\n";
  }
  return url;
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
  return 0;
}