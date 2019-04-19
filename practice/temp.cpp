#include <iomanip>
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

template <typename Type>
Type maxa(Type **array, int k ,int size)
{
    Type p = array[k][0];
    for (int l = 0; l < size; l++)
        {
            if(array[k][l] > p)
                p = array[k][l];
        }

    return p;
}
template <typename Type>
Type sum(Type *array, int size)
{
    Type b = 0;
    for (int l = 0; l < size; l++)
        {
                b += array[l];
        }

    return b;
}
template <typename Type>
Type max_j(Type(**array), int h, int w)
{
    Type *line = new Type [h];

    for (int i = 0; i < h; i++)
    {


        line[i] = maxa(array, i, w);
    }
    return sum(line, h) ;
}

int main()
{
double **a, n, m;
cin >> n >> m;
a = getA (a, n, m);
print(a, n, m);

cout << max_j(a , n ,m);


return 0;
}
