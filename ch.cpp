#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
double chain(double x, int n, int N = 1){
    if (n == N) return x / (x + N);
    return x / (chain (x, n, N + 1) + N);
}
int main()
{
    int a, b ;
    cin >> a >> b;
    cout << chain( a , b);
    
    
    
    return 0;
}