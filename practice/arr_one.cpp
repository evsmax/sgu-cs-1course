#include <iostream>
using namespace std;

void larger_arr (double arr[], int size, double max)
{
    for ( int x = 0; x <= size; x++)
        if( arr[x] > max )
        {
            cout << "arr[" << x << "]" << arr[x] << endl;
        }
}
int  main() {
int n;
cin >> n;
double *arr = new double [n];
    for (int i = 0; i <= n-1; i++)
    {
        cin >> arr[i];
        cout << "arr[" << i << "]" << arr[i] << endl;
    }
double max;
cin >> max;
larger_arr(arr, n, max) ;
delete [] arr;

  return 0;
}
