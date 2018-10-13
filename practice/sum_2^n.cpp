#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n;
cout << "input n= ";
cin >> n ;
int sum = 0;
int current=1;
 for (int i = 0; i<=n; i++)
 {
   sum +=current;
   current<<=1;
 }
cout <<"sum= " << sum ;
  return 0;
}
