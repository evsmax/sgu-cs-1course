#include<iostream>
using namespace std;
void create_table( int width, int heght, double variable )
{
  int x=1,z=1;
  while (x<=heght)
  {
    while (z<=width)
    {
      cout << variable <<"\t";
      z++;
      variable+=1;
    }
    variable= variable-width-1;
    cout << endl;
    x++;
    z=1;
    width-=1;

  }
}
int main()
{

create_table(5,5,1);

return 0;
}
