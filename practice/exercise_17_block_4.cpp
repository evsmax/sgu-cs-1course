#include<iostream>
using namespace std;
#include<math.h>

double len( double x1, double y1, double x2, double y2)
{
return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double max( double a, double b)
{
return (a <= b) ? b : a;
}

int main()
{

cout << "введите числа в следующем порядке:\n x1=\n y1=\n x2=\n y2=\n x3=\n y3=\n";
double x1, y2, y1, x2, x3, y3;
double first, second, third;
cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
first = sqrt( pow(x1, 2) + pow( y1, 2));
second = sqrt( pow(x2, 2) + pow( y2, 2));
third = sqrt( pow(x3, 2) + pow( y3, 2));

if (max(max(first, second),third) == first )
{
cout << " наиболее удалена точка с коррдинатами x1.y1 ";
}
else if (max(max(first, second),third) == second )
{
cout << "наиболее удалена точка с коррдинатами x2.y2";
}
else
{
cout << "наиболее удалена точка с коррдинатами x3.y3";

}

return 0;
}
