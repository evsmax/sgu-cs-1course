#include <iostream>
using namespace std;


int main()
{
double sum, k, w, n, x,xq, fact;
cout << "k " << "x " ;
cin >> k >>  x;
if (k==1)
{
  cout << "sum= "<< x*x/2 ;
}
x= x*x;
xq= x;
sum = x/2 ;
fact = 2;
w = 2;
for (int n=2; n <= k; n++)
{
  if ((n&1)==0)
  {
    x *= xq;
    fact = fact * (w+1) * (w+2);
    sum = sum - ( x/fact);
    w+=2;
  }
  else
  {
    x *= xq;
    fact = fact * (w+1) * (w+2);
    sum = sum + ( x/fact);
    w+=2;
  }
cout << sum << endl ;
}

return 0;
}
