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
	int n, l = 0;
	double r;
	point *a = new point [n];
	cout << "enter r\n";
	cin >> r;
	cout << "enter n\n";
	cin >> n;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		cout << "enter coordinates of " << i << " point:\n";
		cin >> a[i].x >> a[i].y >> a[i].z;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			else
			{
				if (dist (a[i], a[j]) <= r)
				{
					++l;
				}
			}
		}
		if (l >= k)
		{
			centre = a[i];
			k = l;

		}
    l = 0;
	}
	cout << "The centre is in (" << centre.x << ", " << centre.y << ", " << centre.z << ") point";
	return 0;
}
