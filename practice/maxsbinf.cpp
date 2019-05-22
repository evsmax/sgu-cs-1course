#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream out("f.dat",ios::binary);
int n;
cin >> n;

for (int i=1;i<n;i++)
{
   out.write((const char*)&i,sizeof(i));
 }
out.close();

ifstream in("f.dat",ios::binary);
int i=0;
int a,b;
cout << "set [a, b]: ";
cin >> a >> b;
while(in.peek()!=EOF)
{
  i++;
  in.read((char*)&i,sizeof(i));
  if(i>= a && i<=b)	cout<<i<<" ";
}
in.close();

return 0;
}
