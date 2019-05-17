#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void greeting(string &f, string  &f0,  string &p)
{
  cout << "enter file path: " << endl;
  getline(cin, p);
  cout << "enter the name of the first file: " << endl;
  getline(cin, f);
  cout << "enter the name of the second file: " << endl;
  getline(cin, f0);
  f = p + f + ".txt";
  f0 = p + f0 + ".txt";
}

int find_end(string s, int cp) {
 int j = 0;
 while (isdigit(s[cp]) )
 {
 cp++;
 j++;
 }
 return j; }
int find_beg(string s, int cp, int size) {
 int j = 0;
 while (!isdigit(s[cp]) )
 {
 cp++;
 j++;
 if(cp > size )
 {
 return j;
 }

}
 return j; }
void swit(string line, std::fstream& g,  std::fstream& h)
{
  int size, fe = 0, Fe = 0;
  size = line.size();
  int a, b;
  for (int i = 0; i < size ; )
   {

     fe = find_end(line, i);
     Fe = find_beg(line, i + fe, size );

     if (isdigit(line[i]) )
     {
       a = atoi(line.substr(i, fe).c_str());
     }
     i = fe + Fe + i ;



      fe = find_end(line, i);
      Fe = find_beg(line, i + fe, size );

      if (isdigit(line[i]) )
      {
        b = atoi(line.substr(i, fe).c_str());
      }
      i = fe + Fe + i ;



    if( a < b)
    {
      h << a << '\t';
    }
    else
    {
      h << b << '\t';
    }
  }

}


 int main()
 {
   string f, g, path, line;
   greeting(f, g, path);
   cout << "------------------------------------"<< endl;
   fstream fs, gs;
   fs.open(f, fstream :: in | fstream :: out | fstream :: app);
   gs.open(g, fstream :: in | fstream :: out | fstream :: app);
   while(getline(fs, line))
   {
     swit(line, fs, gs);
   }
   fs.close();
   gs.close();
   cout << "complete" << endl;
   if('3' < '9')
   {
     cout <<"yes";
   }
   return 0;
}
