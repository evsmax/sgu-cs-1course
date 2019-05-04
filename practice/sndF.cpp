#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void greeting(string &f, string  &f0, string &f1, string &p)
{
  cout << "enter file path: " << endl;
  getline(cin, p);
  cout << "enter the name of the first file: " << endl;
  getline(cin, f);
  cout << "enter the name of the second file: " << endl;
  getline(cin, f0);
  cout << "enter the name of the third file: " << endl;
  getline(cin, f1);
  f = p + f + ".txt";
  f0 = p + f0 + ".txt";
  f1 = p + f1 + ".txt";
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

  for (int i = 0; i < size ; )
   {

     fe = find_end(line, i);
     Fe = find_beg(line, i + fe, size );

     if (isdigit(line[i]) )
     {

         if(atoi(line.substr(i, fe).c_str()) % 2 == 0)
         {
            g <<  line.substr(i, fe) << "\t" ;
         }
         else
         {
            h << line.substr(i, fe) << "\t";
         }
     }
     i = fe + Fe + i ;

   }
}


 int main()
 {
   string source, odd, even, path, line;
   greeting(source, odd, even, path);
   cout << "------------------------------------"<< endl;
   fstream f, g, h;
   f.open(source, fstream :: in | fstream :: out | fstream :: app);
   g.open(even, fstream :: in | fstream :: out | fstream :: app);
   h.open(odd, fstream :: in | fstream :: out | fstream :: app);
   while(getline(f, line))
   {
     swit(line, g, h);
   }
   f.close();
   g.close();
   h.close();
   cout << "complete" << endl;
   return 0;
 }
