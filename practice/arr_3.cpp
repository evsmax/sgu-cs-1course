#include <iostream>
using namespace std;

void larger_arr (double arr[], int size)
{   double m;
    m = arr [0];
    for ( int x = 0; x <= size; x++)
    {
        if( arr[x] < m )
        {
            m = arr[x];
        }
    }
    cout << "m:= " << m << endl;
}
int main()
{
return 0;
}
