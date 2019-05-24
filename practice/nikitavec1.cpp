#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int vmax(std::vector<int> v)
{ int g = v[0];
  int k = 0;
  for(int i = 0 ; i < v.size(); i++)
  {
    if(v[i] > g)
      g = v[i];
      k = i;
  }
  return k;
}

int main()
{
  cout << "enter a renge [1 to n]: ";
  int n;
  cin >> n;
  n = n + 1;
  vector<int> v;
  for(int i = 1; i < n; i++)
  {
    v.push_back(i);
  }
int l = vmax(v);
int k = v[0];
v[0] = v[l];
v[l] = k;
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << ' ';
        cout << '\n';
    return 0;
}
