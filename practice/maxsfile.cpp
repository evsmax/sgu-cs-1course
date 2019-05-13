#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void greeting(string &f, string  &s, string &p)
{
  cout << "enter file path: " << endl;
  getline(cin, p);
  cout << "enter the name of the first file: " << endl;
  getline(cin, f);
  cout << "enter the name of the second file: " << endl;
  getline(cin, s);
  cout << "enter the name of the third file: " << endl;
  getline(cin, f1);
  f = p + f + ".txt";
  s = p + s + ".txt";
  b = p + b + ".txt";
}

void copy (fstream& p, fstream& s)
{
    string l;
while(getline(s, l))
   {
     p << l;
    }
}

void Swap (fstream& f, fstream& s)
{
    copy(b, s);
    copy(s, f);
    copy(f, b);
}

string b = "b";

 int main()
 {
   string f, s, path;
   greeting(f, s, path);
   cout << "------------------------------------"<< endl;
   fstream fs, ss, bs;
   fs.open(f, fstream :: in | fstream :: out );
   ss.open(s, fstream :: in | fstream :: out );
   bs.open(b, fstream :: in | fstream :: out );
   swap (fs, ss);
   fs.close();
   ss.close();
   bs.close();
   cout << "complete" << endl;
   return 0;
}
