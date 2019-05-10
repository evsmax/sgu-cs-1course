#include <iostream>
#include <string>
using namespace std;

string f( int num,   string g , string s = "")
{
  int h;
  if (num == 0)
  {
    return g;
  }
  else
  {   h = num % 2;
      s = h +'0';
      g = s + g;
      return   f(num / 2, g);
  }
}

int main()
{
  int num ;
  cin >> num;
  string s, g = "";
  cout << f(num, g);
  return 0;
}
