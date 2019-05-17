#include <iostream>
using namespace std;
void ph(int n, string j = "жили на луне" string vv = "ворочались во сне", string dr = "один из лунатиков упал с луны во сне", string ost = "осталось на луне")
{
    if ( n =0 )
    {
          cout << " и больше лунатиков не стало на луне";
}
    else
{
    cout << n << j << endl;
    cout << n << vv << endl;
    cout <<dr << endl;
    cout << n - 1 << ost << endl;
    ph(n - 1);
}
}
int main(){

int x ;
cin >> x ;

ph(x);
return 0;
}
