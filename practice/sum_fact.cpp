#include <iostream>
#include <cmath>
using namespace std;



int main() {
int n;
cout << "input n= ";
cin >> n ;
int sum;
int b;
b = 1;
sum = 0;
 for (int i = 1; i<=n; i++)
 {
    b = b*i ;
      if(i & 1 == 1)
      {
        sum +=b;
      }
      else
      {
        sum-=b;
      }
}
cout <<"sum= " <<sum ;
  return 0;
}
