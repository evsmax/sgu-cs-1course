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
    cout << n << j;
    cout << n << vv;
    cout <<dr;
    cout << n - 1 << ost;
    ph(n - 1);
}
}
int main(){

int x ;
cin >> x ;

ph(x);
return 0;
}
