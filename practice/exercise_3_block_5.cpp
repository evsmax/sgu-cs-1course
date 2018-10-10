#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void calculate( double x )
{
    if (x <= 1 && x >= -1)
  {
      cout << "function is undefined for: x = " << x ;
  }
    else
    {
    cout << sqrt(pow(x,2) - 1);
    }
}

int main()
{
    double a, b, h;
    cout << "Введите границы интервала a, b\n ";
    cin >> a >> b;

    if ( a >= b )
    {
        cerr << "a должно быть меньше b!\n" << endl;
        return 1;
    }

    cout << "Введите шаг вычислений h\n ";
    cin >> h;

    int count = abs( floor( ( b - a ) / h ) ) + 1;
    cout << "Количество шагов =\n " << count << endl;

    cout << setprecision( 10 );
    cout.setf ( ios::fixed );
    for ( int i = 0; i < count; ++i )
    {
        double current = a + i * h;
        cout << "x= " << current << "\t"  << "f( x ) = " ; calculate( current ); cout << "\n" ;
    }

    return 0;
}
