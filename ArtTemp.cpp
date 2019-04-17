#include <iostream>
using namespace std;
template < typename Type>
Type **input(Type (**mass), int n, int m)
   {
      mass=new Type *[n];
      for (int i=0;i<n;i++)
    	mass[i]=new Type [m];
      for (int i=0;i<n;i++)
         for (int j=0;j<m;j++)
         {
        	cin >> mass[i][j];
         }
    return mass;     
   }
template < typename Type>
void output(Type **mass,int n, int m){
  for(int i = 0; i < n; ++i)
  {
    for(int j = 0; j < m; ++j)
      cout << mass[i][j] << ' ';
  }
  cout << '\n';
}
template < typename Type>
void shace(Type **mass,int n, int m)
{
	for(int i = 0; i < n ; i++)
	{
		if (i % 2 == 0)
		{
			for(int k = 0; k < m; k++)
			{
				cout << mass[i][k] <<"\t";
			}
		}
		else
		{
			for(int j = 0; j < m; j++)
				cout << mass[i][m - j - 1] << "\t";
		}
		cout << endl;
	}
    
}
int main()
{
    int  n, m;
    cin >> n >> m ;
    char **arr  ;
    arr = input(arr,n,m);
    
    shace(arr,n,m);
    return 0;
}


