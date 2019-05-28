#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

ifstream in ("data.txt");
ofstream out ("sorted.txt");
struct data
{
	int No, date, dist;
	char aname[50];
  char sname [50];
	char mark[50];
	void screenout();
	void fileout();
};

void data::fileout()
{
	out << setw(10) << mark << setw(8) << No  << setw(8) << sname << setw(8) << date << setw(8)<<dist<< endl;
}
int cline( std::ifstream& l, int k = 0)
{
	string s;
	while(getline(l, s))
	{
		k++;
	}

	return k;
}
int main ()
{
	int i = 0, N;
	int g = cline(in);
	in.close();
	ifstream in ("data.txt");
	data D[g];
	while (in.peek() != EOF)
	{
		in >> D[i].mark>> D[i].No >> D[i].sname >> D[i].date >> D[i].dist;
		i++;
	}
	cout << "enter N \n";
	cin >> N ;
	for (int j = 0; j < i - 1; j++)
		if (D[j].date < N)
			D[j].fileout();
	in.close();
	out.close();
}
