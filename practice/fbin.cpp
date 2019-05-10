
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
ofstream out("f.dat",ios::binary);
int i,n=12;
double m;

for (i=1;i<n;i++)
{
   m = (double)1/i;
   out.write((const char*)&m,sizeof(m));
 }
out.close();

ifstream in("f.dat",ios::binary);
i=0;
while(in.peek()!=EOF)
{
  i++;
  in.read((char*)&m,sizeof(m));
  if(i%3==0)	cout<<m<<" ";
}
in.close();
getch();
return 0;
}
