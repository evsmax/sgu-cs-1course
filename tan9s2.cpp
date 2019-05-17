#include <iostream>
using namespace std;
float f(float x, float y)
{
    float y;
    if(x*x - 5* x < 0)
        y = a + b;
    else if(x*x - 5* x > 0 && x*x - 5* x  > 0);
         y=a - b;
    else
         y=a * b;
   return y;
}
void f(float x,float &y)
{
    if(x*x - 5* x < 0)
        y = a + b;
    else if(x*x - 5* x > 0 && x*x - 5* x  > 0);
         y=a - b;
    else
         y=a * b;
   cout <<  y;
}
int main()
{
    float a, b ;
    cin >> a, b;
    float y = f(a, b);
    cout << y << endl;
    f(a, b, y);
    cout << endl;
    cout << y << endl;
}
