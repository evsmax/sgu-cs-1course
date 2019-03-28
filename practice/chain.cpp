#include <iostream>
using namespace std;

int main(){
double res ,  x;
int n, N ;;
cin >> x >> n;
N = n;
res = x;
while( true )
{
  if (N == 0)
  {
    cout << res;
    break;
  }

  res = x/( N+ res );


  N--;
}


  return 0;
}
