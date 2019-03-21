#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void print(int cp, int c)
{
    for(int i = 0; i != cp; i++)
        cout << " ";
    for(int i = 0; i != c; i++)
        cout << c;
}

void qwe(int n, int sp, int p = 1 )
{
    if(n == 0)
    {
        cout << "!!!----!!!";
    }
    else if(p == n)
    {
         print(0, p); 
         
    }
    else  
    {
        print(n - sp - 1, p);
        cout  << "\n";
        qwe(p + 1, sp + 1);
    }
        
}
int main()
{
    int n ;
    cout << "enter n: ";
    cin >> n ;
    int sp = n/2;
     qwe(n, sp);
    cout  << "\n";
    print(0, sp);
    
    return 0;
}