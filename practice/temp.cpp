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
Type maxa(Type *array, int size)
{
    Type p = array[0];
    for (int l = 0; l < size; l++)
        {
            if(array[l] > p)
                p = array[l];
        }
    
    return p;
}
template <typename Type>
Type* max_j(Type(**array), int h, int w)
{
    Type *line = new Type [h];
    Type sum ;
    for (int i = 1; i < h; i++)
    {
        sum = 0;
        for (int j = 1; i < w; i++)
        {
            sum += array[i][j];
        }
        line[i] = sum;
    }

    return maxa(line, h);
}

int main()
{
int **a, *b, n, m;
cin >> n >> m;
a = getA (a, n, m);
print(a, n, m);

cout << "normA= " << max_J(a, n, m);


return 0;
}
