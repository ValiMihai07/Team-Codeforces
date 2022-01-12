#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n ;
	int sigur[1000][3];
	int rez = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> sigur[i][j];
		}
	}

	for (int k = 0; k < n; k++) 
	{
		if ((sigur[k][0] == 1 && sigur[k][1] == 1) || (sigur[k][0] == 1 && sigur[k][2] == 1) || (sigur[k][1] == 1 && sigur[k][2] == 1) || (sigur[k][0] == 1 && sigur[k][1] == 1 && sigur[k][2] == 1))
			rez++;
	}

	cout << rez;

	return 0;
}