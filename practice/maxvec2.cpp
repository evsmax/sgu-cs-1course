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


    for(int i = 0 ; i <= v.size(); i++)
    {   if(v[i] < 0)
      {
          v.emplace(v.begin() + i, v[i]);
          i++;
      }
    }
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << ' ';
        cout << '\n';
    return 0;
}
