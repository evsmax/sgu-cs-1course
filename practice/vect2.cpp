#include <iostream>
#include <vector>
using namespace std;
int main()
{
  cout << "enter a renge [v(1)..v(n)]: ";
  int n;
  double h;
  cin >> n;
  n = n ;
  vector<int> v;
  int g;
  for(int i = 0; i < n; i++)
  { cin >> g;
    v.push_back(g);
  }
  for(int i = 0; i < n; i++)
	cout << "v[i]" <<  v[i] << "\t";
  cout << endl;
int m;
int g;
cin >> g;

    for(int i = 0 ; i <= v.size(); i++)
    {   if(v[i]%10==g )
      {
cin>> m;
          v.emplace(v.begin() + i, m);
          i++;
      }
    }
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << ' ';
        cout << '\n';
    return 0;
}.0
