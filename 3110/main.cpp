#include <iostream>
using namespace std;
int a[100][100], f[100], n, p;

void citire() {
	int i = 1, j = 1;
	cin >> n;
	p = n * n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
}

bool sume() {
	int s = 0, s1 = 0, j;
	for (int i = 1; i <= n; i++)
		s += a[j][i];

	while (j <= n) {
		j++;
		s1 = 0;
		for (int i = 1; i <= n; i++)
			s1 += a[j][i];
		if (s1 != s)
			return false;
	}
	return true;
}

bool linie() {
	for (int k = 0; k <= p; k++)
		f[k] = 0;

	for (auto i = 1; i <= n; i++)
		for (auto j = 1; j <= n; j++)
		{
			if (f[a[i][j]]!=0 || a[i][j] > n* n)
				return false;
			else {
				f[a[i][j]]++;
			}
		}
	return true;
}

bool coloana() {
	for (int k = 0; k <= p; k++)
		f[k] = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (f[a[i][j]]!=0 || a[j][i] > n* n)
				return false;
			else {
				f[a[j][i]]++;
			}
		}
	return true;
}

bool diagonale() {
	for (int k = 0; k <= p; k++)
		f[k] = 0;

	int i, j;
	i = 1;
	j = 1;

	while (i <= n) {
		if (f[a[i][j]]!=0 || a[i][j]>n* n)
			return false;
		else {
			f[a[i][j]]++;
		}
		i++;
		j++;
	}
	for (int k = 0; k <= p; k++)
		f[k] = 0;
	i = 1;
	j = n;

	while (i != n) {
		if (f[a[i][j]]!=0 || a[i][j]>n* n)
			return false;
		else {
			f[a[i][j]]++;
		}
		i++;
		j--;
	}
	return true;
}


void rezolvare() {
	if (sume() == false || linie() == false || diagonale() == false || coloana() == false)
		cout << "matricea nu este patrat magic";
	else
		cout << "matricea este patrat magic de ordin " << n;
}

int main()
{
	citire();
	rezolvare();
}
