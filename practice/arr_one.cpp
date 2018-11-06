#include <iostream>
using namespace std;

void larger_arr (double arr[], int size, double max)
{

    for (int x = 0; x<=(size-1); x++)
    {
              if ( arr[x] > max )
              {
                 cout << "arr[" << x << "]" << arr[x] << endl;
              }
    }
}
int  main() {

double d[5] = {3, 10, 1, 4, 7 };
larger_arr(d, 5, 1) ;

  return 0;
}
