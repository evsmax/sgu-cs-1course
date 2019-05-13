#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
ofstream out("f.dat",ios::binary);
int n;
cin >> n;

for (i=1;i<n;i++)
{
   out.write((const char*)&i,sizeof(i));
 }
out.close();

ifstream in("f.dat",ios::binary);
i=0;
while(in.peek()!=EOF)
{
  i++;
  in.read((char*)&i,sizeof(i));
  if(i%2==0)	cout<<i<<" ";
}
in.close();
getch();
return 0;
}
