#include<iostream>
using namespace std;
void create_table( int width, int heght, std::string variable )
{
  int x=1,z=1;
  while (x<=heght)
  {
    while (z<=width)
    {
      cout << variable <<"\t";
      z++;
    }
    cout << endl;
    x++;
    z=1;
  }
}
int main()
{

create_table(2,2,"hello");

return 0;
}
