//https://pl.spoj.com/problems/FR_02_10/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(0);
	string a;
	cin >> a;
	int testy;
	cin >> testy;
	int liczba = a.size();
	for (int j = 0;j<testy;j++)
	{
		int skala;
		cin >> skala;
		if (skala>0)
		{
			for (int i = 0;i<liczba;i++)
			{
				cout << a[i];
				if (i<liczba - 1)
					for (int r = 0;r<skala - 1;r++)
						cout << " ";
			}
		}
		if (skala<0)
		{
			skala = -skala;
			for (int i = liczba - 1;i >= 0;i--)
			{
				cout << a[i];
				if (i>0)
					for (int r = 0;r<skala - 1;r++)
						cout << " ";
			}
		}
		if (skala == 0)
		{
			cout << a[liczba - 1];

		}
		if (j<testy - 1)
			cout << endl;
	}

	return 0;
}