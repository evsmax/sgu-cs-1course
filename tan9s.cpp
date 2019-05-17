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
  f = p + f + ".txt";
}


void swit(string line, std::fstream& g)
{
  int size, fe = 0, Fe = 0;
  size = line.size();
  int a, b;


}


 int main()
 {
   string f, g, path, line, line0, line1 = "";
   greeting(f, g, path);
   cout << "------------------------------------"<< endl;
   fstream fs;
   fs.open(f, fstream :: in | fstream :: out | fstream :: app);
   int k = 0, j, r;
   while(getline(fs, line))
   {
     line0 = line;
     if(line0.size() > line1.size())
     {
       j = line0.size();
       line1 = line;
       r = k + 1 ;
     }
     k++;
   }
   fs.close();
   cout << "complete" << endl << r;
   return 0;
}
