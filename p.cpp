#include <iostream>
using namespace std;
float f(float x)
{
    float y;
    if(x < 2)
        y=1;
    else if(x==2)
         y=0;
    else
         y=-1;
   return y;
}
void f(float x,float &y)
{
    if(x < 2)
        y=1;
    else if(x==2)
         y=0;
    else
         y=-1;
   cout <<  y;
}
int main()
{
    float a ;
    cin >> a;
    float y = f(a);
    cout << y << endl;
    f(a,y);
    cout << endl;
    cout << y << endl;
}
