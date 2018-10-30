#include <iostream>
#include <cmath>
using namespace std;
int  main ()
{
  double e, i, f, res = 1, sum = 0;
  cin >> e;
  i= res;
  do
  {
    f = res;
    res = 1.0/((i+1)*(i+2)*i);
    sum+=res;
    i++;
  }
  while((f-res) > e);
  cout << sum << "\n" << i;
  return 0;
}
