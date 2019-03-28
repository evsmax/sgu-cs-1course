#include <iostream>
using namespace std;
void print(int cp, int c)
{
   for(int i = 0; i < cp; i++)
       cout << " ";
   for(int i = 0; i < c; i++)
       cout << c;
}
void picture(int n, int value = 1, int cp = 0, int  cp2 = 0){
    if(n <= 1)
        print(cp2 , 1);
    else if(value < n){
        print(n/2 + cp, value);
        cout << endl;

        picture(n, value + 2, cp - 1);
    }
    else{
        print(cp2, n);
        cout << cp2 <<endl;

        picture(n - 2, value, cp , cp2 + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    picture(n);

    cout << "\n\n";
    return 0;
}
