#include <iostream> #include <string> using namespace std; 
int find_end(string s, int cp) { 
 int j = 0; 
 while ((int)s[cp] >= 65 && (int)s[cp] <= 122) 
 { 
 cp++; 
 j++; 
 } 
 return j; } 
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

int main() { string m ; getline(cin, m); char c; cin >> c; int size, f = 0, F = 0; size = m.size(); 

for (int i = 0; i < size ; ) 
 { 
 cout << "i= " << i <<endl; 
 f = find_end(m, i); 
 F = find_beg(m, i + f, size ); 
 cout << "f= " << i <<endl; 
 cout << "F= " << i <<endl; 
 if (m[i] == c && m[i + f -1] == c ) 
 { 
 cout << m.substr(i, f) << endl; 
 } 

 i = f + F + i ; 
 cout << "i= " << i <<endl; 

 } 


 return 0; }
