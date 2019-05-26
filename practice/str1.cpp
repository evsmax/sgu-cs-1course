#include <iostream>
#include <cmath>
using namespace std;

struct point
{
 int x, y, z;
};
double dist (point a, point b)
{
 return sqrt (pow (a.x - b.x, 2) + pow (a.y - b.y, 2) + pow (a.z - b.z, 2));
}

int main ()
{
 point centre;
 int n;
 double r;
 cout << "enter n\n";
 cin >> n;
 point *a = new point [n];
for (int i = 0; i < n; ++i)
 {
   cout << "enter coordinates of " << i << " point:\n";
   cin >> a[i].x >> a[i].y >> a[i].z;
 }
 int arr[n][n];
 double max = 0;
 point m;
 point p;
 for (int i = 0; i < n; i++)
 {
   for (int j = 0; j < n; j++)
   {
     if (i == j) continue;
     if(max < dist(a[i], a[j]))
      {
        max = dist(a[i], a[j]);
        p = a[i];
        m = a[j];
      }
   }

  }

 cout << "fst point(" << p.x << ", " << p.y << ", " << p.z << ") ";
 cout << "snd point(" << m.x << ", " << m.y << ", " << m.z << ") ";
 return 0;
}
