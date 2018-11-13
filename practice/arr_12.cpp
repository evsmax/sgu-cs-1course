#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
    int  n, m;
    cin >> n >> m ;
    float max;
    cin >> max;
    float **array = new float *[n];
    for (int count = 0; count < n; count++)
        array[count] = new float [m];

    for (int count_row = 0; count_row < n; count_row++){
        for (int count_column = 0; count_column < m; count_column++){
            cin >> array[count_row][count_column] ;}}

    for (int count_row = 0; count_row < n; count_row++)
                for (int count_column = 0; count_column < m; count_column++)
                    if(array[count_row][count_column] > max )
                        {
                            cout << "arr[" << count_row << "]" << "[" << count_column << "] " << array[count_row][count_column] << endl;
                        }

    for (int count = 0; count < 2; count++)
        delete []array[count];
    return 0;
}
