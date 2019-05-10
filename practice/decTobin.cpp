#include <iostream>
#include <string>
using namespace std;
string f( int num, string s = "")
{
  if (num <= 0)
  {}
    return  ((num % 2) +'0') + (f(num / 2));
}

int main()
{
  int num;

  cin >> num;

  cout << f(num);
  return 0;
}
