#include <iostream>
#include <vector>
using namespace std;
int main()
{
  cout << "enter a renge [1 to n]: ";
  int n;
  double h;
  cin >> n;
  n = n + 1;
  vector<int> v;
  for(int i = 1; i < n; i++)
  {
    v.push_back(i);
  }
  for(int i = 0; i < n; i++)
	cout << "v[i]" <<  v[i] << "\t";
cout << endl;
int k;
cout << "k: = ";
cin >> k;

    for(int i = k ; i <= v.size(); i+= k + 1)
        v.emplace(v.begin() + i, 0);

    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << ' ';
        cout << '\n';
    return 0;
}
