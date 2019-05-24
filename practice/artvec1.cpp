#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  cout << "enter a renge [1 to n]: ";
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++)
  {
    a.push_back(i);
  }
  int sum = std::accumulate(a.begin(), a.end(), 0);
  int k = 0;
  for(int i = 2; i < sum /2 + 1; i++)
  {
    if(sum % i == 0)
    {
      k++;
    }
  }
  if(k==0)
    cout << sum << " is prime";
    return 0;
}
