#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

ifstream in ("data.txt");
ofstream out ("sorted.txt");
struct data
{
	int price, quantity;
	char name[50];
	char type[50];
	void screenout();
	void fileout();
};

void data::fileout()
{
	out << setw(10) << name << setw(8) << price << setw(8) << type << setw(8) << quantity << endl;
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
		in >> D[i].name >> D[i].price >> D[i].type >> D[i].quantity;
		i++;
	}
	cout << "enter N \n";
	cin >> N ;
	for (int j = 0; j < i - 1; j++)
		if (D[j].quantity < N)
			D[j].fileout();
	in.close();
	out.close();
}
