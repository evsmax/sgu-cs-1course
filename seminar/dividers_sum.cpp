#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int long Count(int long  num)
{
   int long count = 1, k = 0, i;
   if (num == 1 || num == 2)
      return num;
   while ((num & 1) == 0)
   {
      k++;
      num >>= 1;
   }
   if (num == 1)
      return k + 1;
   else
      count = k + 1;
   for(i = 3; i*i <= num; i += 2)
   {
      k = 0;
      while(num % i == 0)
      {
         k++;
         num /= i;
      }
      count *= (k + 1);
   }
   if (num > 1)
      count <<= 1;
   return count;
   }

int main() {
  cout << Count(12);
  return 0;
}
