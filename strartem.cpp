#include <iostream>
#include <cmath>
using namespace std;

struct r
{
  double x, y, z;
};


double lenr( r *m, int i, int j)
{
return sqrt(pow(m[i].x - m[j].x, 2) + pow(m[i].y-m[j].y, 2) + pow(m[i].z-m[j].z, 2));
}

int main()
{
  int n;
  cin >> n;
  r m[n];
  for(int i = 0; i < n  ; i++)
  {
    cout << "m" << i <<":";
    cin >> m[i].x >> m[i].y >> m[i].z;

  }
  double min =  lenr(m, 1, 0);
  for(int i = 0; i < n/2 + 1; i++)
  {
        for(int j = i + 1; j <= n/2 + 1; j++)
        {
          if(i == j)
            continue;
          if(lenr(m, i, j) > lenr(m, i + 1, j + 1) && lenr(m, i + 1, j + 1) < min)
            min = lenr(m, i + 1, j + 1);
        }
  }
  cout << min ;
  return 0;

}
