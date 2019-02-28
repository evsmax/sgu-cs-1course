#include <iostream>
using namespace std;
double chain(int x, int n)
{

if (n == 0) return x ;
else if (n == 1) return (float) x  / (n + (float)x) ;
return (float) x  / (n + (float)x  / chain(x, n - 1));
}


int main(){

int x , n , max;
cin >> x >> n ;
max = n;
cout << chain(x , n );


}
