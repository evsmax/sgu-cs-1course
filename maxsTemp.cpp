#include <iostream>
using namespace std;
template <typename Type>
Type** getA(Type(**array), int h, int w)
{
array = new Type *[h];
for (int k = 0; k < h; k++)
    array[k] = new Type [w];
for (int i = 0; i < h; i++)
    for(int j = 0; j < w ; j++)
        cin >> array[i][j];
return array;
}
template <typename Type>
void print(Type(**array), int h, int w)
{

    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}
template < typename tup3>
void shace(tup3 **mass,int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      {
        if ( mass[i][j] > 0 )
        {
          cout << mass[i][j] << " ";
        }
      }
  }
}
int main()
{
int n, m, **arr;
cin >> n >> m ;
arr = getA(arr,n,m);
shace(arr,n,m);
print(arr,n,m);
return 0;
}
