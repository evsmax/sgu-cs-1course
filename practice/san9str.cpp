#include <iostream>
#include <string>
using namespace std;
int find_end(string s, int cp)
{
 int j = 0;

 while ((int)s[cp] != 32)
 {
   cp++;
   j++;
 }
 return j;
}
int find_beg(string s, int cp, int size) {
 int j = 0;
 while ((int)s[cp] < 65 || (int)s[cp] > 122)
 {
 cp++;
 j++;
 if(cp > size )
 {
 return j;
 }

}
 return j; }

int main()
 {
  string m, p, v, rez = "" , space = " " ;
  getline(cin, m);
  int size, f = 0, Fe = 0;
  size = m.size();
  cout << "size " << size;
int g = 1;
for (int i = 0; i < size ; )
 {
 cout << "i= " << i <<endl;
 f = find_end(m, i);
 Fe = find_beg(m, i + f, size );
 cout << "f= " << i <<endl;
 cout << "F= " << i <<endl;
 if(g % 2 != 0)
{
  p = m.substr(i, f);
  i = f + Fe + i ;
  g++;
}
 else if( g % 2 == 0)
 {
  v = m.substr(i, f);

  i = f + Fe + i ;
  g++;
  rez = rez + space + v + space + p;
  }

  cout << rez << endl;
 }
cout << rez;
return 0; }
